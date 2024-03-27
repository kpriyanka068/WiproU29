#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp1=NULL, *fp2=NULL;
    int a=10;
    float b= 11.5;
    char Name[20]= "Bhima";

    int x;
    float y;
    char z[20];


    fp1 = fopen("test1.txt","r+");
    if(fp1 == NULL)
    {
        perror("fopen()");
        exit(-1);
    }

    printf("\nFtell = %d",ftell(fp1));
    fseek(fp1,5,SEEK_SET);
    fprintf(fp1,"Hello World!");
    printf("\nFtell = %d",ftell(fp1));
    fseek(fp1,15,SEEK_CUR);
    printf("\nFtell = %d",ftell(fp1));
    
    fclose(fp1);
    printf("\n\n");
    return 0;
}
