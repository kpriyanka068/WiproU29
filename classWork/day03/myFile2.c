/*
file to demo on arithmetic operators
*/
#include <stdio.h>
void main()
{
    int v1,v2,v3,v4;
    printf("\nEnter the values of v1,v2,v3 and v4:");
    scanf("%d%d%d%d",&v1,&v2,&v3,&v4);
    printf("\nAddress of v1=%u and its value=%d",&v1,v1);
    printf("\nAddress of v2=%u and its value=%d",&v2,v2);
    printf("\nAddress of v3=%u and its value=%d",&v3,v3);
    printf("\nAddress of v4=%u and its value=%d",&v4,v4);

    printf("\nEquality Operation: %d",(v1==v2));
    printf("\nGreayer than Op: %d",(v3>v4));
    printf("\nlesser than Op: %d",(v4>v3));
    printf("\nGeater than or Equal Op: %d",(v1>=v3));
    printf("\nLesser than or Equal Op: %d",(v2>=v4));

    printf("\nLogical AND Operation: %d",(v1==v2)&&(v1>=v3));
    printf("\nLogical OR Operation: %d",(v1==v2)||(v1>=v3));
    printf("\nLogical NOTOperation: %d",!(v1<v2));



    return 0;
    
    
}