/*
demo on structures

*/

#include <stdio.h>
#include <string.h>

struct student
{
        int rollno;
        char name[20];
};

void dispStudent(struct student);

int main()
{
    

    struct student s1,s2;

    s1.rollno = 101;
    strcpy(s1.name, "bhima1");
    s2.rollno = 102;
    strcpy(s2.name, "bhima2");
    

    printf("\nStudent 2 details are\n");
    printf("\nRollNo: %d",s2.rollno);
    printf("\nName: %s",s2.name);

    dispStudent(s1);

    printf("\n\n");
    return 0;   
}

void dispStudent(struct student s)
{
    printf("\nStudent 1 details are\n");
    printf("\nRollNo: %d",s.rollno);
    printf("\nName: %s",s.name);
}