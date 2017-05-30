
#include<stdio.h>
main()
{
    int r,c, a[100][100], b[100][100],i,j;
    printf("How many rows: ");
    scanf("%d", &r);
    printf("How many columns: ");
    scanf("%d", &c);
    printf("Enter the matrix values:\n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nAfter interchanging:\n\n");
    for(i=1; i<=c; i++)
    {
        for(j=1; j<=r; j++)
        {
            b[i][j]=a[j][i];
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
