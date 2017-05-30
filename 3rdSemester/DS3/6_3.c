
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int p,info;
    struct node *link;
}*front=NULL;

void insert(int item,int p)
{
    struct node *temp,*p;

    temp=(struct node *)malloc(sizeof(struct node));
    temp->info=item;
    temp->p=p;
    if( isEmpty() || p < front->p )
    {
        temp->link=front;
        front=temp;
    }
    else
    {
        p = front;
        while( p->link!=NULL && p->link->p<=p )
            p=p->link;
        temp->link=p->link;
        p->link=temp;
    }
}

int del()
{
    struct node *temp;
    int item;
    if( isEmpty() )
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    else
    {
        temp=front;
        item=temp->info;
        front=front->link;
        free(temp);
    }
    return item;
}

int isEmpty()
{
    if( front == NULL )
        return 1;
    else
        return 0;

}

void display()
{
    struct node *ptr;
    ptr=front;
    if( isEmpty() )
        printf("Queue is empty\n");
    else
    {
        printf("Queue is :\n");
        printf("p       Item\n");
        while(ptr!=NULL)
        {
            printf("%5d        %5d\n",ptr->p,ptr->info);
            ptr=ptr->link;
        }
    }
}


int main()
{
    int choice,item,p;
    while(1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Input the item to be added in the queue: ");
            scanf("%d",&item);
            printf("Enter its priority: ");
            scanf("%d",&p);
            insert(item, p);
            break;
        case 2:
            printf("Deleted item is %d\n",del());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default :
            printf("Wrong choice\n");
        }
    }
}
