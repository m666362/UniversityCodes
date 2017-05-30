#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    for(k=1; k<=3; k++)
    {
        for(i=1; i<=5; i++)
        {
            printf("*");
        }
        for(j=1; j<=5; j++)
        {
            printf("-");
        }
        printf("\n");
    }
    for(m=1; m<=3; m++)
    {
        for(l=1; l<=10; l++)
        {
            printf("-");
        }
        printf("\n");
    }
}
