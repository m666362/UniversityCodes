
#include<stdio.h>
#include<math.h>

main()
{
    int i,is,flag,k,j,h,x,es;
    long int e=33000, a[33100];

    for(i=2; i<=e; i++)
    {
        a[i]=1;
    }

    es=sqrt(e);

    for(i=2; i<=es; i++)
    {

        is=sqrt(i);
        flag=0;
        for(k=2; k<=is; k++)
        {
            if(i%k==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(j=i+i; j<=e; j+=i)
            {
                a[j]=0;
            }
        }
    }
    printf("How many numbers to check whether prime or not:\n");
    scanf("%d", &h);
    printf("Enter the numbers:\n");
    for(i=1; i<=h; i++)
    {
        scanf("%d", &x);
        if(a[x]==1)
        {
            printf("%d is a prime number\n", x);
        }
        else {
            printf("%d is NOT a prime number\n", x);
        }
    }
    return 0;
}
