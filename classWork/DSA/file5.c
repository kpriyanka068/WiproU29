/*
QUEUE ->FIFO
1. QUEUE is full -> reached MAX level
2. QUEUE is empty -> REAR == FRONT
3. CAP of QUEUE should be defined
4. MIN/bottom/FRONT of QUEUE should be define 
5. REAR/TOP of the queue should be define 
6. queuing op-> adding val to queue
6. dequeue op -> removing val from queue (only FRONT/FIRST element to be removed)
7. REAR -> growing while pushing/ 
8. FRONT is moving forward will reducing while popping
*/

#include <stdio.h>
#define MAX 5
int FRONT = 0;
int REAR = 0;

int q[MAX];
void QueueOp(int);
void DeQueue();
void dispList();



int main()
{
    QueueOp(10);
    QueueOp(20);
    QueueOp(30);
    QueueOp(40);
    QueueOp(50);
    QueueOp(60);

    dispList();
    
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();

    dispList();
    printf("\n\n");
    return 0;
}

void QueueOp(int n)
{
    if(REAR == MAX)
    {
        printf("\nQUEUE is FULL\n");
        return ;
    }
    q[REAR] = n;
    REAR++;

}

void DeQueue()
{
    
    if(FRONT == REAR)
    {
        printf("\nQUEUE is empty\n");
        FRONT=0;
        REAR=0;
        return ;
    }
    printf("\n%d element is popped out",q[FRONT]);
    FRONT++;
}

void dispList()
{
    int i;
    if(FRONT == REAR)
    {
        printf("\nQUEUE is empty\n");
        return ;
    }
    printf("\nQUEUE elements are\n");
    for(i=FRONT;i<REAR;i++)
        printf("%d->",q[i]);
    printf("\n\n");
}