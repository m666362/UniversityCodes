#include<stdio.h>
int main()
{
    int a[100][100], b[100][100], r,c,i,j,z;
    printf("Enter row numbers for both tables: ");
    scanf("%d", &r);
    printf("Enter column number for both tables: ");
    scanf("%d", &c);
    printf("For table 1\nEnter the contents of:\n");
    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            printf("row %d & column %d: ", i+1,j+1);
            scanf("%d", &a[j][i]);
        }
    }
    printf("For table 2\nEnter the contents of:\n");
    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            printf("row %d & column %d: ", i+1,j+1);
            scanf("%d", &b[j][i]);
        }
    }
    printf("After adding two tables:\n");
    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            z=0;
            z=a[j][i] + b[j][i];
            printf("%d ", z);
        }
        printf("\n");
    }

}
