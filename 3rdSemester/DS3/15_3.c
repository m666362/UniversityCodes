
#include<stdio.h>
int l=1;
int gcd(int x, int y)
{
    while(x!=y)
    {
        if(x>y)
            return gcd(x-y,y);
        else return gcd(x,y-x);
    }
    return x;
}

void lcm(int a[], int n)
{
    if(n==0)
        return;
    l*=a[n-1]/gcd(l,a[n-1]);
    lcm(a,n-1);
}

int main()
{
    int n,a[100],i;
    printf("How many numbers to find LCM:\n");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    lcm(a,n);
    printf("LCM = %d\n", l);
}
