
#include<stdio.h>
main()
{
    int a[100],n,i, max, x,v;
    printf("Enter array size: \n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Where would you like to insert?\n");
    scanf("%d", &x);
    printf("What would you like to insert?\n");
    scanf("%d", &v);
    for(i=n; i>=x; i--)
    {
        a[i+1]=a[i];
    }
    a[x]= v;
    n++;
    printf("After inserting %d at a[%d], the array becomes: ", v,x);
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
