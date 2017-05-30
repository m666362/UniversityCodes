#include<stdio.h>
main()
{
    int i,j,k,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>i; j--)
        {
            printf(" ");
        }
        for(k=1; k<2*i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1; j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<2*i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

