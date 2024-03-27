/*
stack ->FILO
1. stack is full -> reached MAX level
2. stack is empty -> reached MIN level
3. CAP of stack should be defined
4. MIN/bottom of stack should be define 
5. push op-> adding val to stack
6. pop op -> removing val from stack (only last element to be removed)
7. TOP -> growing while pushing/ top will reducing while popping
*/

#include <stdio.h>
#define MAX 5
int BOTTOM = -1;
int TOP = -1;

int stk[MAX];
void pushStack(int);
void popStack();
void dispList();



int main()
{
    pushStack(10);
    pushStack(20);
    pushStack(30);
    pushStack(40);
    pushStack(50);
    pushStack(60);

    dispList();
    
    popStack();
    popStack();
    popStack();
    popStack();
    popStack();
    popStack();

    dispList();
    printf("\n\n");
    return 0;
}

void pushStack(int n)
{
    if(TOP == (MAX -1))
    {
        printf("\nStack is FULL\n");
        return ;
    }
    TOP++;
    stk[TOP] = n;

}

void popStack()
{
    if(TOP == BOTTOM)
    {
        printf("\nStack is empty\n");
        return ;
    }
    printf("\n%d element is popped out",stk[TOP]);
    TOP--;
}

void dispList()
{
    int i;
    if(TOP == BOTTOM)
    {
        printf("\nStack is empty\n");
        return ;
    }
    printf("\nStack elements are\n");
    for(i=TOP;i>=0;i--)
        printf("\n%d",stk[i]);
    printf("\n\n");
}