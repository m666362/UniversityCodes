
#include<stdio.h>
main()
{
    int n,i,a[100],item;
    printf("Enter array size: \n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter index number to delete: \n");
    scanf("%d", &i);
    item= a[i];
    for( ; i<= n; i++)
    {
        a[i]= a[i+1];
    }
    n--;
    printf("ITEM = %d has been deleted\nNew array: ", item);
    for(i=1; i<=n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
