
#include<stdio.h>

void min(int a[], int k, int n, int *loc)
{
    int min,j;
    min=a[k];
    *loc=k;
    for(j=k; j<=n; j++)
    {
        if(min>a[j])
        {
            min=a[j];
            *loc=j;
        }
    }
    return;
}

int main()
{
    int n,i,a[200], k,temp,loc;
    printf("How many numbers to sort:\n");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before sorting:\n");
    for(i=1; i<=n; i++)
    {
        printf("%d ", a[i]);
    }
    for(k=1; k<=n-1; k++)
    {
        min(a,k,n,&loc);
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
    }
    printf("\nAfter sorting:\n");
    for(i=1; i<=n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
