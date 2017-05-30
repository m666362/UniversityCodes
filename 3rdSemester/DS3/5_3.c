
#include<stdio.h>
int queue[100], n=99, front=0, rear=0, count=0;

void menu()
{
    printf("1. Qinsert\n");
    printf("2. Qdelete\n");
    printf("3. Qshow\n");
}
void Qshow()
{
    int i,j,temp;
    if(front<=rear)
    {
        for(i=front; i<=rear; i++)
        {
            printf("Queue[%d]= %d\n", i, queue[i]);
        }
        printf("\n");
    }
    else
    {
        for(i=front; i<=n; i++)
        {
                printf("Queue[%d]= %d\n", i, queue[i]);
        }
        for(j=1; j<=rear; j++)
        {
            printf("Queue[%d]= %d\n", j, queue[j]);
        }
        printf("\n");
    }
}
void Qinsert()
{
    int item;
    if((front==1 && rear==n) || (front==rear+1))
    {
        printf("Overflow\n");
    }
    if(front==0)
    {
        front=1;
        rear=1;
    }
    else if(rear==n)
    {
        rear=1;
    }
    else
    {
        rear++;
    }
    printf("Enter an elemen t to insert:\n");
    scanf("%d", &item);
    queue[rear]=item;
    count++;
    return;
}

void Qdelete()
{
    int item;
    if(front==0)
    {
        printf("Underflow\n");
        return;
    }
    item=queue[front];
    if(front==rear)
    {
        front=0;
        rear=0;
    }
    else if(front==n)
    {
        front=1;
    }
    else
    {
        front++;
    }
    printf("Deleted item = %d\n", item);
    count++;
    return;
}

int main()
{
    int c;
    while(c!=0)
    {
        menu();
        scanf("%d", &c);
        if(c==1)
        {
            Qinsert();
        }
        else if(c==2)
        {
            Qdelete();
        }
        else if(c==3)
        {
            Qshow();
        }
        else if(c==0)
        {
            break;
        }
    }
    return 0;
}

