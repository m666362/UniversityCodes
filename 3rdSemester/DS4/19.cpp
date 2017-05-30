
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200], b[200][20], i,max=199,j,n,z,k,l,s=7,search,k1,k3,aa,h;
    for(i=1; i<=max; i++)
    {
        a[i]=0;
        for(j=1; j<=19; j++)
        {
            b[i][j]=0;
        }
    }

    printf("How many numbers to add:\n");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &z);
        k=z%s+1;
        if(a[k]==0)
        {
            a[k]=z;
        }
        else
        {
            for(j=k; j<=max; j++)
            {
                if(a[j]==0)
                {
                    a[j]=z;
                    for(l=1; l<=max; l++)
                    {
                        if(b[k][l]==0)
                        {
                            b[k][l]=j;
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }

    printf("How many numbers to search:\n");
    scanf("%d", &h);
    for(aa=1; aa<=h; aa++)
    {
        printf("Enter a number to search:\n");
        scanf("%d", &search);
        k1=search%s+1;
again:
        if(a[k1]==search)
        {
            printf("%d found at %d index\n", search, k1);
        }
        else
        {
            ///printf("\nInside else\n");
            for(i=1; i<=max; i++)
            {
                if(b[k1][i]==0)
                {
                    printf("%d Not found\n", search);
                    break;
                }
                else
                {
                    k1=b[k1][i];
                    goto again;
                }
            }
        }
    }

    return 0;
}

