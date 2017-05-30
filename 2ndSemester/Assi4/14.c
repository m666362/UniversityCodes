#include<stdio.h>
int main()
{
    char a[100], b[100], c[100];
    int as,bs, i,j;
    printf("Enter string A: ");
    gets(a);
    printf("Enter string B: ");
    gets(b);
    as=strlen(a);
    bs=strlen(b);
    printf("After concatenation, A: ");
    for(i=0;i<=as;i++)
    {
        c[i] = a[i];
    }
    for(j=0, i=i-1; j<=as; j++, i++)    {
        c[i] = b[j];
    }
    printf("%s", c);
}
