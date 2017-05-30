
#include<stdio.h>
main()
{
    int a[100],n,i, max;
    printf("Enter array size: \n");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    max=a[1];
    for(i=2; i<=n; i++)
    {
        if(max<a[i])
        {
            max= a[i];
        }
    }
    printf("\nMaximum = %d\n", max);
    return 0;
}
