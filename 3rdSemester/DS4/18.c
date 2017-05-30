///hashing///
#include<stdio.h>
int main()
{
    int a[200], max=199, n,i,j,k,s=7,z,flag1, flag2, flag3, flag4,h,b,c,search,k1;
    for(i=1; i<=max; i++)
    {
        a[i]=-1;
    }
    printf("How many numbers to add:\n");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &z);
        k=z%s+1;
        if(a[k]==-1)
        {
            a[k]=z;
        }
        else
        {
            flag1=0;
            for(j=k; j<=max; j++)
            {
                if((a[j]==-1) || (a[j]==-2))
                {
                    a[j]=z;
                    flag1=1;
                    break;
                }
            }
            if(flag1==0)
            {
                for(j=1; j<=k; j++)
                {
                    a[j]=z;
                    break;
                }
            }
        }
    }

    printf("How many numbers to search:\n");
    scanf("%d", &h);
    for(b=1; b<=h; b++)
    {
        printf("Enter a number to search:\n");
        scanf("%d", &search);
        k1=search%s+1;
        if(a[k1]==search)
        {
            printf("%d found at %d index\n", search, k1);
        }
        else
        {
            flag3=0;
            for(c=k1; c<=max; c++)
            {
                if(a[c]==-1)
                {
                    break;
                }
                if(a[c]==search)
                {
                    printf("%d found at %d index\n", search, c);
                    flag3=1;
                    break;
                }
            }
            if(flag3==0)
            {
                flag4=0;
                for(c=1; c<=k1; c++)
                {
                    if(a[c]==search)
                    {
                        printf("%d found at %d index\n", search, c);
                        flag4=1;
                        break;
                    }
                }
                if(flag4==0)
                {
                    printf("Not found\n");
                }
            }
        }
    }
    return 0;
}
