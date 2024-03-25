#include <stdio.h>

int demoRecur(int n){
 if(n==0)
 return 1;
 else
 return n*demoRecur(n-1);
}

int main()
{
    int num;
    printf("Enter a positive integer:");
    scanf("%d",&num);

    if(num<0)
    printf("factorial of negative number is not defined.\n");
    else
    printf("factorial of %d = %d\n",num,demoRecur(num));
    return 0;
}
