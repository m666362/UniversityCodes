
#include<stdio.h>
#include<stdlib.h>
#define NULL 0

struct linked_list
{
    int num;
    struct linked_list *next;
};

typedef struct linked_list node;

int main()
{
    int n,i,p;
    node *start, *ptr, *new,*save;
    start= (node*) malloc(sizeof(node));
    ptr= start;
    printf("How many elements:\n");
    scanf("%d", &n);
    printf("Input numbers:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &ptr-> num);
        if(i!=n)
        {
            ptr-> next = (node*) malloc(sizeof(node));
            ptr= ptr -> next;
        }
    }
    ptr-> next= NULL;
    ptr= start;

    while(ptr!= NULL)
    {
        printf("%d %x\n", ptr->num,ptr);
        ptr= ptr -> next;
    }
    ptr= start;
    printf("Enter position number to insert\n");
    scanf("%d", &p);
    new=(node*)malloc(sizeof(node));
    printf("Enter element to insert:\n");
    scanf("%d", &new->num);
    if(p==1)
    {
        new->next=start;
        start=new;
    }
    else
    {
        for(i=2; i<=p; i++)
        {
            if(i==p)
            {
                new->next=ptr->next;
                ptr->next=new;
            }
            ptr=ptr->next;
        }
    }
    ptr= start;
    printf("the linked list is:\n");
    while(ptr!= NULL)
    {
        printf("%d %x\n", ptr->num,ptr);
        ptr= ptr -> next;
    }
    return 0;
}

