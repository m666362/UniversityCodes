#include<stdio.h>
int main()
{
    int i,n,count=0;
    double s=0,avg;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i+=3)
    {
        printf("%d + ",i);
        s+=i;
        count++;
    }
    printf("\b\b= %g\n", s);
    avg=s/count;
    printf("Average = %g", avg);
    return 0;
}
