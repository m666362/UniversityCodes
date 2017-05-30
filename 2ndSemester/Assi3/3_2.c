#include<stdio.h>
int main()
{
    int n, i;
    double sum=0, avg,x;
    printf("How many numbers to input?\n");
    scanf("%d", &n);
    printf("Enter the %d numbers: ", n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf", &x);
        sum+=x;
    }
    printf("Sum = %g\n", sum);
    avg=sum/n;
    printf("Average = %g", avg);
    return 0;
}
