
#include<stdio.h>
a(int m, int n)
{
    if(m==0)
    {
        return (n+1);
    }
    else if(m!=0 && n==0)
    {
        return a(m-1, 1);
    }
    else if(m!=0 && n!=0)
    {
        return a(m-1, a(m, n-1));
    }
}
main()
{
    int m,n;
    printf("Enter the value of m:\n");
    scanf("%d", &m);
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("A(%d,%d)=%d",m,n, a(m,n));
}
