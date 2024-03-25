#include <stdio.h>

int main()
{
    int x=10,y=20,z=30;
    int res=0;

    res = (x>y)?((x>z)?(x):(z)):((y>z)?(y):(z));
    printf("\nres=%d\n",res);
    return 0;
}
