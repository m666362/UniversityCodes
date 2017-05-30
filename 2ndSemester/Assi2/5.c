#include<stdio.h>
int main()
{
    int s;
    printf("Enter marks: ");
    scanf("%d", &s);
    if(s>=0)
        if (s>=40)
            if(s>=50)
                if(s>=65)
                    if(s>=80)
                        if(s>100)
                            printf("invalid");
                        else
                            printf("A");
                    else
                        printf("B");
                else
                    printf("C");
            else
                printf("D");
        else
            printf("F");
    else
        printf("Invalid");
    return 0;
}
