/*"Development Scenario: Extensible Archive File Handler
 
Assignment Overview
Objective: To develop an extensible application capable of handling multiple archive formats.
Scope: Initial POC will implement functionality to list contents of tar and zip files.
Extensibility: Designing the application to allow easy integration of additional formats in the future.

Requirements
Functional Requirements
Load and parse tar and zip archive formats.
Display a list of files contained within the archives.
Non-Functional Requirements
Extensibility for future formats.
Error handling and robustness.
Platform independence where feasible.

System Design
Modular Architecture
Core application logic separate from archive format handlers.
Use of dynamic loading for format-specific modules.
Plugin System
Define a common interface for archive handlers.
Implement dynamic loading of plugins at runtime.

Implementation Details
Core Application
Command-line interface to accept file input and plugin selection.
Dynamic loading system to load the appropriate handler based on file extension or user input.
Archive Handler Interface
Define an interface that all format handlers must implement (e.g., list contents, extract file, add file).
Tar Handler Plugin
Develop a tar handler module as a shared library.
Implement the function to list contents of a tar archive.
Zip Handler Plugin
Similar to the tar handler, but for zip archives.

Development Process
Research and Analysis
Study the tar and zip file specifications.
Investigate existing libraries that can be leveraged.
Design Phase
Outline the plugin interface and core application logic.
Design the command-line interface.
Implementation Phase
Implement the core application and handler interface.
Create the tar and zip handlers following the defined interface.
Testing Phase
Unit tests for each component.
Integration tests for the application.

Error Handling and Robustness
Input Validation
Ensure robust input handling to prevent security issues.
Error Handling"






Comprehensive error handling within core and plugins.

Resource Management

Ensure all resources (memory, file handles) are
managed correctly.



Performance Considerations

Efficiency

Optimize the reading and parsing of
archives.

Scalability

Ensure the system can handle large archives
smoothly.



Security Considerations

Validation

Ensure the safe parsing of archives to prevent
exploits like buffer overflows.

Dependency Management

Safely manage dependencies, especially if
leveraging third-party libraries.



User Documentation and Help System

Documentation

Provide clear documentation for the application
and plugin development.

Help System

Implement a help system within the application
to guide users on usage and available commands.



Deliverables

Source code for the core application and
handlers.

Unit and integration test suites.

User and developer documentation.

A compiled version of the application ready to run.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LEN 256
#define MAX_FILE_COUNT 100

typedef struct {
    char filename[MAX_FILENAME_LEN];
    long offset;
    long size;
} FileEntry;

typedef struct {
    FILE *archive;
    FileEntry entries[MAX_FILE_COUNT];
    int num_files;
} Archive;

// Function prototypes
Archive* createArchive(const char *filename);
int addFile(Archive *archive, const char *filename);
int extractFile(Archive *archive, const char *filename);
void listContents(Archive *archive);
void closeArchive(Archive *archive);

int main() {
    Archive *archive = createArchive("archive.bin");

    addFile(archive, "file1.txt");
    addFile(archive, "file2.txt");

    listContents(archive);

    extractFile(archive, "file1.txt");
    extractFile(archive, "file2.txt");

    closeArchive(archive);

    return 0;
}

Archive* createArchive(const char *filename) {
    Archive *archive = (Archive*)malloc(sizeof(Archive));
    if (archive == NULL) {
        perror("Failed to allocate memory for archive");
        exit(EXIT_FAILURE);
    }

    archive->archive = fopen(filename, "wb+");
    if (archive->archive == NULL) {
        perror("Failed to create archive file");
        free(archive);
        exit(EXIT_FAILURE);
    }

    archive->num_files = 0;

    return archive;
}

int addFile(Archive *archive, const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        fprintf(stderr, "Failed to open file %s\n", filename);
        return 0;
    }

    fseek(archive->archive, 0, SEEK_END);
    long offset = ftell(archive->archive);

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    rewind(file);

    fwrite(&size, sizeof(long), 1, archive->archive);
    fwrite(&offset, sizeof(long), 1, archive->archive);

    char buffer[1024];
    size_t bytes_read;
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        fwrite(buffer, 1, bytes_read, archive->archive);
    }

    fclose(file);

    if (archive->num_files < MAX_FILE_COUNT) {
        strcpy(archive->entries[archive->num_files].filename, filename);
        archive->entries[archive->num_files].offset = offset;
        archive->entries[archive->num_files].size = size;
        archive->num_files++;
        return 1;
    } else {
        fprintf(stderr, "Maximum file count reached\n");
        return 0;
    }
}

int extractFile(Archive *archive, const char *filename) {
    for (int i = 0; i < archive->num_files; i++) {
        if (strcmp(archive->entries[i].filename, filename) == 0) {
            FILE *file = fopen(filename, "wb");
            if (file == NULL) {
                fprintf(stderr, "Failed to create file %s\n", filename);
                return 0;
            }

            fseek(archive->archive, archive->entries[i].offset, SEEK_SET);

            char buffer[1024];
            size_t bytes_read;
            long bytes_remaining = archive->entries[i].size;
            while (bytes_remaining > 0 && (bytes_read = fread(buffer, 1, sizeof(buffer), archive->archive)) > 0) {
                fwrite(buffer, 1, bytes_read, file);
                bytes_remaining -= bytes_read;
            }

            fclose(file);
            return 1;
        }
    }

    fprintf(stderr, "File %s not found in archive\n", filename);
    return 0;
}

void listContents(Archive *archive) {
    printf("Archive Contents:\n");
    for (int i = 0; i < archive->num_files; i++) {
        printf("%s\n", archive->entries[i].filename);
    }
}

void closeArchive(Archive *archive) {
    fclose(archive->archive);
    free(archive);
}