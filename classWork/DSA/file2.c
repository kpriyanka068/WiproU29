#include <stdio.h>
#include<stdlib.h>

struct node

{
    int val;
    struct node *next;
};

typedef struct node NODE;

void dispList(NODE *);


int main()
{
    int ch=1;
    NODE *head=NULL,*temp=NULL,*nn=NULL;
    while(ch){
        nn = (NODE *)malloc(sizeof(NODE));
        printf("\nEnter the new node value: ");
        scanf("%d",&nn->val);
        nn->next = NULL;

        if(head == NULL)
        {
            // list is empty
            // this is for the first node
            head = nn;
            temp = nn;
        }
        else
        {
           /* while(temp->next != NULL)
            {
                temp = temp->next;
            }
            */
            temp->next = nn;
            temp = temp->next;
        }
        printf("\nDo you want to add new node (0/1): ");
        scanf("%d",&ch);
    }

    dispList(head);

    printf("\n\n");
    return 0;
}


void dispList(NODE *n)
{
    printf("\nList is \n");
    while(n != NULL)
    {
        printf("%d->", n->val);
        n = n->next;
    }
    printf("NULL\n");
}