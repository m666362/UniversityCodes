#include<stdio.h>
int main()
{
    char a[100], b[100];
    int sa,sb,i,j;
    printf("Enter string A: ");
    gets(a);
    printf("Enter string B: ");
    gets(b);
    sb=strlen(b);
    for(i=0; i<sb; i++)
    {
        a[i]= b[i];
    }
    sa=strlen(a);
    printf("After copying B to A, A becomes: ");
    for(j=0; j<sb; j++)
    {
        printf("%c", a[j]);
    }
}
