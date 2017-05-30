
#include <stdio.h>
#include <string.h>

main()
{
    char a[100],b[100],c[100];
    int k, i,t=0,x,s,s1,sa,sb;
    printf("Enter First String:");
    gets(a);
    printf("Enter Second String:");
    gets(b);
    printf("Enter the position where the second string is to be inserted: ");
    scanf("%d", &k);
    sa = strlen(a);
    sb = strlen(b);
    for(i=0; i <= sa; i++)
    {
        c[i] = a[i];
    }
    s = sa+sb;
    s1 = k+sb;

    for (i = k; i < s; i++)
    {
        x = c[i];
        if (t < sb)
        {
            a[i] = b[t];
            t++;
        }
        a[s1] = x;
        s1++;
    }
    printf("%s", a);

    return 0;
}

