#include<stdio.h>
int main()
{
    char a[100];
    int i,s;
    printf("Enter a string: ");
    gets(a);
    s=strlen(a);
    printf("After reversing: ");
    for(i=0; s>i; s--)
    {
        printf("%c", a[s-1]);
    }
}
