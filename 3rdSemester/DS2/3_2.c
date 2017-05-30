
#include<stdio.h>
int main()
{
    int a[100][100],csum,rsum,r,c,i,j;
    printf("Enter row numbers: ");
    scanf("%d", &r);
    printf("Enter collum number: ");
    scanf("%d", &c);
    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
        {
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
    printf("After adding row sum & column sum:\n");
    for(i=0; i<=r; i++)
    {
        csum=0;
        for(j=0; j<=c; j++)
        {
            if(i==r)
            {
                break;
            }
            else if(j==c)
            {
                printf("%d ", csum);
            }
            else
            {
                printf("%d ", a[j][i]);
                csum+=a[j][i];
            }
        }
        if(i==r) break;
        else printf("\n");
    }
    for(i=0; i<=c; i++)
    {
        rsum=0;
        for(j=0; j<=r; j++)
        {
            if(j==r){
                break;
            }
            else
            {
                rsum+=a[i][j];
            }
        }
        if(j==r && i==c) {
            break;
        }
        else
        {
            printf("%d ", rsum);
        }
    }
    return 0;
}
