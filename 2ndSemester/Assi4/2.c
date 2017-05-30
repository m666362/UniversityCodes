#include<stdio.h>
void reorder(int n, int x[])
{
    int i, item, temp;
    for(item=0; item< n - 1; item++)
    {
        for(i=item+1; i< n; i++)
        {
            if(x[i] < x[item])
            {
                temp = x[item];
                x[item] = x[i];
                x[i] = temp;
            }
        }
    }
    return;
}

int main()
{
    int i,n=6,x[100];
    printf("How many numbers to sort?\n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    reorder(n,x);
    printf("Numbers after sorting: ");
    for(i=0; i<n;i++)
    {
        printf("%d ", x[i]);
    }
}


