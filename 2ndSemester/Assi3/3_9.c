
#include<stdio.h>
#include<ctype.h>
main()
{
    char a[500];
    int i;
    gets(a);
    for(i=0; a[i] != '\0' ; i++)
    {
        if(a[i]=='Z')
        {
            printf("A");
        }
        else if(a[i]=='z')
        {
            printf("a");
        }
        else if(a[i] == '9')
        {
            printf("0");
        }
        else if(a[i] == ' ')
        {
            printf("*");
        }
        else
        {
            a[i]= a[i] + 1;
            printf("%c", a[i]);
        }

    }

    return 0;
}

