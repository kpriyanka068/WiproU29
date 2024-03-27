#include <stdio.h>
#include <string.h>
#include <emp.h>

void printDetails(EMP e)
{
    printf("\n===========================================\n");
    printf("\nEmployee Details are\n");
    printf("\n===========================================\n");
    printf("\nID: %d",e.empId);
    printf("\nName: %s",e.empName);
    printf("\nGender: %c",e.empGender);
    printf("\nPhNo: %d",e.empPhno);
    printf("\nSalary: %f",e.empSal);
    printf("\nAddress: %s",e.empAddress);
    printf("\n===========================================\n");
}


void getDetails(EMP *e)
{
    printf("\nAddress of e in getDetails: %u pointing to %u",&e, e);
    printf("\n===========================================\n");
    printf("\nEnter Employee Details\n");
    printf("\n===========================================\n");
    printf("\nID: ");
    scanf("%d",&e->empId);
    printf("\nName: ");
    scanf("%s",e->empName);
    getc(stdin);
    printf("\nGender: ");
    scanf("%c",&e->empGender);
    printf("\nPhNo: ");
    scanf("%d",&e->empPhno);
    printf("\nSalary: ");
    scanf("%f",&e->empSal);
    printf("\nAddress: ");
    scanf("%s",e->empAddress);
    printf("\n===========================================\n");
}
