
#include<stdio.h>
#include<stdlib.h>
#define NULL 0

struct linked_list{
    int num;
    struct linked_list *next;
};

typedef struct linked_list node;

int main()
{
    int n,i,item;
    node *start, *ptr;
    start= (node*) malloc(sizeof(node));
    ptr= start;
    printf("How many elements:\n");
    scanf("%d", &n);
    printf("Input the elements:\n");
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
    printf("Elements of the linked list are:\n");
    while(ptr!= NULL)
    {
        printf("%d %x\n", ptr->num, ptr);
        ptr= ptr -> next;
    }
    printf("Enter an element to search:\n");
    scanf("%d", &item);
    ptr= start;
    while(ptr!= NULL)
    {
        if(ptr->num==item)
        {
            printf("%d is found at %x location\n", item, ptr);
            break;
        }
        ptr= ptr -> next;
    }
    return 0;
}
