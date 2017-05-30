#include<stdio.h>
int main()
{
    int n, r[100], i, j;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Binary form of %d is ", n);
    for(i=0; n!=0; i++)
    {
        r[i] = n%2;
        n/=2;
    }
    for(j=0; j<i; i--)
    {
        printf("%d", r[i-1]);
    }
}
