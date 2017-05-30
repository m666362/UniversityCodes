
#include<stdio.h>
#include<string.h>
main()
{
    char t[100], p[100];
    int k=0,max,s,r,l,index;
    printf("Enter string T:\n");
    scanf("%s", &t);
    printf("Enter string P:\n");
    scanf("%s", &p);
    s=strlen(t);
    r=strlen(p);
    max= s-r+1;
    while(k<=max)
    {
        for(l=0; l<r; l++)
        {
            if(p[l] != t[k+l-1])
            {
                k++;
                break;
            }
        }
        index=k;
        k++;

    }
    if(k>max)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Index= %d\n", index);
    }
    return 0;
}
