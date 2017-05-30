
#include<stdio.h>
int main()
{
    int na,nb,r,s,a[200], b[200], c[400],ptr,k,i,z;
    printf("Elements in list A:\n");
    scanf("%d", &r);
    printf("Enter %d elements:\n", r);
    for(i=1; i<=r; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements in list A:\n");
    for(i=1; i<=r; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nElements in list B:\n");
    scanf("%d", &s);
    printf("Enter %d elements:\n", r);
    for(i=1; i<=s; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Elements in list B:\n");
    for(i=1; i<=s; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\nAfter merging and sorting:\n");

    na=1;
    nb=1;
    ptr=1;
    while(na<=r && nb <=s)
    {
        if(a[na]<b[nb])
        {
            c[ptr]=a[na];
            ptr++;
            na++;
        }
        else
        {
            c[ptr]=b[nb];
            ptr++;
            nb++;
        }
    }
    if(na>r)
    {
        for(k=0; k<=s-nb; k++)
        {
            c[ptr]=b[nb+k];
        }
    }
    else
    {
        for(k=0; k<=s-na; k++)
        {
            c[ptr]=a[na+k];
        }
    }
    for(z=1; z<=r+s; z++)
    {
        printf("%d ", c[z]);
    }
}
