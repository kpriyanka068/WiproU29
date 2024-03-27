#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    //char fileName[100] = "/home/rps/batcho1/classWork/day09/abishek.txt";
    char fileName[100];
    strcpy(fileName,"argv");

    FILE *fp=Null;
    fp = fopen(fileName,"r");
    if(fp == Null)
    {
        perror("fopen()");
        exit(-1);
    }
    printf("\nOpened the file successfully\n");
    return 0;
}