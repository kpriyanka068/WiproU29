#ifndef EMP_H
#define EMP_H
struct Employee
{
    char empName[20];
    char empAddress[50];
    char empGender;
    int empId;
    int empPhno;
    float empSal;
};

typedef struct Employee EMP;

void printDetails(EMP);
void getDetails(EMP *);

#endif