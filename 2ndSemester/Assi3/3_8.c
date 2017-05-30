#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[100], b,au,al;
    int i,j;
    gets(a);

    for(j=0; a[j] ; j++)
    {
        if(a[j] >= 65 && a[j] <= 90)
        {
            printf("%c", tolower(a[j]));
        }
        else
        {
            printf("%c", toupper(a[j]));
        }
    }
}
