#include<stdio.h>
int fb(int n)
{
    if(n<=1)
    {
        return n;
    }
    else {
        return fb(n-1) + fb(n-2);
    }
}

int main()
{
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        printf("Fib(%d) = %d\n", i, fb(i));
    }
}
