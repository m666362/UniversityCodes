
#include<stdio.h>
#include<math.h>
main()
{
    double a,b,c,r1,r2,r,i,d;
    printf("Enter the values of A,B,C:\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    d = b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are %.2lf & %.2lf\n", r1,r2);
    }
    else if(d==0)
    {
        r1= -b/(2*a);
        printf("Roots are %.2lf & %.2lf\n", r1,r1);
    }
    else {
        r=-b/(2*a);
        i= sqrt(-d)/(2*a);
        printf("Roots are %.2lf+%.2lfi & %.2lf-%.2lfi\n",r,i,r,i);
    }
    return 0;
}
