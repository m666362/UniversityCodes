#include<stdio.h>
int main()
{
    int x,n,i;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        x=x*x;
    }
    printf("%d", x);
}
