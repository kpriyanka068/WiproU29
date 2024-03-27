/*
demo on union
*/

#include <stdio.h>
#include <string.h>

union emp
{
    char empName[20];
    int empId;
    float sal;
};

typedef union emp EMP;

int main()
{
    EMP e1;
    // printf("\nSizeof the structure emp=%d",sizeof(EMP));
    printf("\nSizeof the union emp=%d",sizeof(EMP));

    e1.empId =101;
    printf("\nid: %d\n",e1.empId);
    strcpy(e1.empName,"bhima");
    printf("\nName: %s",e1.empName);
    e1.sal = 10001.5;
    
    printf("\nSal: %f", e1.sal);


    printf("\n\n");

    return 0;
}
