
#include<stdio.h>
void reorder(int n, int x[])
{
    int i, item, temp;
    for(item=1; item< n; item++)
    {
        for(i=item+1; i<= n; i++)
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
    int i,n,x[100];
    printf("How many numbers to sort?\n");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x[i]);
    }
    reorder(n,x);
    printf("Numbers after sorting: ");
    for(i=1; i<=n;i++)
    {
        printf("%d ", x[i]);
    }
}


