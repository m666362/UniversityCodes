
#include<stdio.h>
int main()
{
    int a[100][100], r,c,i,j;
    printf("Enter row numbers: ");
    scanf("%d", &r);
    printf("Enter collum number: ");
    scanf("%d", &c);
    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
            printf("Enter the contents of row %d & column %d: ", i+1,j+1);
            scanf("%d", &a[j][i]);
        }
    }
    printf("\nThe actual matrix is:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    printf("\nInterchanged matrix(array) is:\n");
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
