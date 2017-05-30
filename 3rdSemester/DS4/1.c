
#include<stdio.h>
int main()
{
    int a[100], n=5, i, temp, ptr, j;
    a[0]=-1;
    printf("Enter the numbers one by one\nEnter 0 to terminate the program\n");
    for(i=1; ; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==0)
        {
            printf("...::: Program terminated :::...\n");
            break;
        }
        temp= a[i];
        ptr= i-1;
        while(temp<a[ptr])
        {
            a[ptr+1]=a[ptr];
            ptr= ptr-1;
        }
        a[ptr+1]=temp;
        printf("\nAfter inserting the list becomes:\n");
        for(j=1; j<=i; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n\n");
    }
}
