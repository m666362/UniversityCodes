#include<stdio.h>
int main()
{
    double g,h,r,n,t;
    printf("Enter Hours: ");
    scanf("%lf",&h);
    printf("Enter rate: ");
    scanf("%lf", &r);
    g=h*r;
    if (g>5000) {
        t=g*0.05;
        n=g-t;
        printf("Gross= %.3lf\nNet=%.3lf",g,n);
    }
    else {
        t=0;
        n=g-t;
        printf("Gross= %.3lf\nNet=%.3lf",g,n);
    }
    return 0;
}
