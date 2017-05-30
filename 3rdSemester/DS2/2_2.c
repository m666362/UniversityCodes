
#include<stdio.h>
main()
{
    int r,c, a[100][100], b[100][100],i,j;
    printf("How many rows: ");
    scanf("%d", &r);
    printf("How many columns: ");
    scanf("%d", &c);
    printf("Enter matrix 1 values:\n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter matrix 2 values:\n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("After adding two matrix:\n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
