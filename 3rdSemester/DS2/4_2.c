
#include<stdio.h>
main()
{
    int a[100][100], b[100][100],m[100][100],r1,r2,c1,c2,r,c,i,j,k,sum;
    printf("Enter row for first matrix:\n");
    scanf("%d", &r1);
    printf("\nEnter column for first matrix:\n");
    scanf("%d", &c1);
    printf("\nEnter matrix 1 elements:\n");
    for(r=1; r<=r1; r++)
    {
        for(c=1; c<=c1; c++)
        {
            scanf("%d", &a[r][c]);
        }
    }
    printf("\nEnter row for second matrix:\n");
    scanf("%d", &r2);
    printf("\nEnter column for second matrix:\n");
    scanf("%d", &c2);
    if(c1!=r2)
    {
        printf("\nThese matrix cannot be multiplied\n");
    }
    else
    {
        printf("\nEnter matrix 2 elements:\n");
        for(r=1; r<=r2; r++)
        {
            for(c=1; c<=c2; c++)
            {
                scanf("%d", &b[r][c]);
            }
        }
        for(i=1; i<=r1; i++)
        {
            for(j=1; j<=c2; j++)
            {
                sum=0;
                for(k=1; k<=r2; k++)
                {
                    sum+=a[i][k]*b[k][j];
                }
                m[i][j]= sum;
            }
        }
        printf("\n\nMatrix 1 X matrix 2 =\n\n");
        for(r=1; r<=r1; r++)
        {
            printf("|\t");
            for(c=1; c<=c1; c++)
            {
                printf("%d\t", m[r][c]);
            }
            printf("|\n");
        }
    }
    return 0;
}
