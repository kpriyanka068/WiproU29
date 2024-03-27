#include <stdio.h>
#include<stdlib.h>

struct node

{
    int val;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;

void dispListF(NODE *);
void dispListB(NODE *);


int main()
{
    int ch=1;
    NODE *head=NULL,*temp=NULL,*nn=NULL;
    while(ch){
        nn = (NODE *)malloc(sizeof(NODE));
        printf("\nEnter the new node value: ");
        scanf("%d",&nn->val);
        nn->next = NULL;
        nn->prev = NULL;

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
            nn->prev = temp;
            temp = temp->next;
        }
        printf("\nDo you want to add new node (0/1): ");
        scanf("%d",&ch);
    }

    dispListF(head);
    dispListB(head);

    printf("\n\n");
    return 0;
}


void dispListF(NODE *n)
{
    printf("\nList in Forward direction \n");
    while(n != NULL)
    {
        printf("%d->", n->val);
        n = n->next;
    }
    printf("NULL\n");
}

void dispListB(NODE *n)
{
    printf("\nList in Backward direction \n");
    while(n->next != NULL)
    {
        n = n->next;
    }
    do{
        printf("%d->",n->val);
        n = n->prev;
    }while(n!=NULL);
    
    printf("NULL\n");
}