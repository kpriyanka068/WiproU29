#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFF 1024
#define SUCCESS 0
#define FAILURE -1

int main(int argc, char *argv[])
{
    // char fileName[100] = "/home/rps/batch01/classWork/day07/abhishek.txt";
    char fileName1[100];
    char fileName2[100];
    char content[BUFF];
    char c;
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    
    if(argc != 3)
    {
        printf("\napp should have 3 args\n");
        exit(FAILURE);
    }

    
    strcpy(fileName1, argv[1]);
    strcpy(fileName2, argv[2]);
    
    fp1 = fopen(fileName1,"r");
    if(fp1 == NULL)
    {
        perror("fopen()");
        exit(FAILURE);
    }

    fp2 = fopen(fileName2,"w");
    if(fp2 == NULL)
    {
        perror("fopen()");
        exit(FAILURE);
    }


    // printf("\nOpened the file successfully\n");
    /*
    while(fgets(content,BUFF,fp)){
        printf("\nRead from the file:\n%s",content);
    }
    */
   while((c = fgetc(fp1))!=EOF)
   {
    putc(c,fp2);
   }
    
    printf("\nFile Copied Successfully\n");
    

    fclose(fp2);
    fclose(fp1);


    return 0;

}