
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
    int n,i;
    node *start, *ptr;
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
    return 0;
}
