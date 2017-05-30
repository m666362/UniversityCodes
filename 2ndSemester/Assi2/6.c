#include<stdio.h>
main()
{
    double u,cost, vat;
    printf("Enter the unit value: ");
    scanf("%lf", &u);
    if(u<=100)
    {
        cost=u*1.75;
        if(cost<100)
        {

            printf("100TK");
        }
        else
        {
            printf("%.3lfTK", cost);
        }
    }
    else if(u>100 && u<=300)
    {
        cost=(u-100)*2.25 + 100*1.75;
        printf("%.2lfTK", cost);
    }
    else
    {
        cost=(u-300)*3.5 + 200*2.25 + 100*1.75;
        if (cost<=1000)
        {
            printf("%.2lfTK", cost);
        }
        else
        {
            vat=cost*.15;
            printf("%.2lfTK + 15%%VAT(%.2lfTK) = %.2lfTK", cost, vat, cost+vat);
        }

    }
}

