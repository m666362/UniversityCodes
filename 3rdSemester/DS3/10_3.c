
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
    int n,i,item,flag=0;
    node *start, *ptr,*x,*y;
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
    printf("The linked list is:\n");
    while(ptr!= NULL)
    {
        printf("%d %x\n", ptr->num,ptr);
        ptr= ptr -> next;
    }
    ptr= start;
    printf("Enter an element to delete:\n");
    scanf("%d", &item);
    for(i=1; i<=n; i++)
    {
        if(i==1 && item==ptr->num)
        {
            flag=1;
            start=ptr->next;
            break;
        }
        else if(item==ptr->num)
        {
            flag=1;
            x=ptr->next;
            ptr=y;
            ptr->next=x;
            break;
        }
        y=ptr;
        ptr=ptr->next;
    }
    if(flag==0)
    {
        printf("%d is not found\n", item);
    }
    else
    {
        ptr= start;
        printf("After deleting %d, elements of the linked list are:\n", item);
        while(ptr!= NULL)
        {
            printf("%d %x\n", ptr->num,ptr);
            ptr= ptr -> next;
        }
    }
    return 0;
}
