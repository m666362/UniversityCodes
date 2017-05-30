
#include<stdio.h>
main()
{
    int i,n,a[100],x,flag=0;
    printf("Enter array size: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a number to search: \n");
    scanf("%d", &x);
    printf("%d ", x);
    for(i=1; i<=n; i++)
    {
        if(a[i]==x)
        {
            flag=1;
            printf("is found at a[%d] index", i);
            break;
        }
    }
    if(flag==0)
    {
        printf(" not found in the array");
    }
    return 0;
}
