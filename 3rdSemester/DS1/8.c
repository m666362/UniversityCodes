
#include<stdio.h>
main()
{
    int b=1,e,m,i,item,d[100];
    printf("Enter array(sorted) size: ");
    scanf("%d", &e);
    printf("Enter array elements: ");
    for(i=1; i<=e; i++)
    {
        scanf("%d", &d[i]);
    }
    m=(b+e)/2;
    printf("Enter a number to search: ");
    scanf("%d", &item);
    while(b<=e && d[m] != item)
    {
        if(item<d[m])
        {
            e=m-1;
        }
        else
        {
            b=m+1;
        }
        m=(b+e)/2;
    }
    if(d[m]==item)
    {
        printf("%d found at index %d\n",item,m);
    }
    else
    {
        printf("Item not found\n");
    }
    return 0;
}
