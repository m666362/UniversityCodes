
#include<stdio.h>
main()
{
    int a[100], n, c=0, i;
    printf("How many students?\n");
    scanf("%d", &n);
    printf("Enter the marks:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] >= 40)
        {
            c++;
        }
    }
    printf("Passed students = %d\n", c);

    return 0;
}
