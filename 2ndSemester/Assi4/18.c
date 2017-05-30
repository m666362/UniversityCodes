#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1, r[100], i=0, j, dec, sum=0;
    printf("Write a number in binary form: ");
    scanf("%d", &n);
    n1=n;
    while(n)
    {
        r[i]=n%10;
        i++;
        n/=10;
    }
    for(j=0; j<i ; j++)
    {
        dec= r[j] * pow(2,j);
        sum+=dec;
    }
    printf("\nDecimal form of %d is %d",n1, sum);
}
