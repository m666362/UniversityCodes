#include<stdio.h>
int main()
{
    int d,m,y,d1,m1,y1;
    printf("Enter a date: ");
    scanf("%d %d %d", &d,&m1,&y1);
    m=abs(m1);
    y=abs(y1);
    {
        if (m==1)
            printf("January ");
        else if (m==2)
            printf("February ");
        else if (m==3)
            printf("march ");
        else if (m==4)
            printf("April ");
        else if (m==5)
            printf("May ");
        else if (m==6)
            printf("June ");
        else if (m==7)
            printf("July ");
        else if (m==8)
            printf("August ");
        else if (m==9)
            printf("September ");
        else if (m==10)
            printf("October ");
        else if (m==11)
            printf("November ");
        else if (m==12)
            printf("December ");
    }
    {
        if (d==1 || d==21) printf("%dst",d);
        else if (d==2 || d==22) printf("%dnd",d);
        else if(d==3) printf("%drd",d);
        else printf("%dth",d);
    }
    printf(", %d",y);
    return 0;
}
