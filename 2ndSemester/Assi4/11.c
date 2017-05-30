#include<stdio.h>
int main()
{
    char a[100];
    FILE *fp;
    fp=fopen("TEST.DAT", "w");
    gets(a);
    fprintf(fp, "%s", a);
    printf("%s", a);
}
