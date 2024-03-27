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


    fp1 = fopen("test1.txt","r");
    if(fp1 == NULL)
    {
        ferror(fp1);
        exit(-1);
    }

    printf("\nFtell = %d",ftell(fp1));
    while(fscanf(fp1,"%d%f%s",&x,&y,z) != EOF){
        // fscanf(fp1,"%d%f%s",&x,&y,z);
        printf("\nRead from the file\n%d %f %s\n",x,y,z);
        printf("\nFtell = %d",ftell(fp1));

    }
    fclose(fp1);

    return 0;
}
