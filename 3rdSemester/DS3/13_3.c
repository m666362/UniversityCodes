
#include<stdio.h>
#include<string.h>
#define L 1000

char f[L];

void itoa(int n, char s[])
{
    int i, sign;
    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do
    {
        s[i++] = n % 10 + '0';
    }
    while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    strrev(s);
    return;
}


void mult(char a[],char b[])
{
    char c[L],d[L],r[L],m[L][L];
    int l,l1,l2,i,j,t,s,u,cy,M;


    l1=strlen(a)-1;
    l2=strlen(b)-1;

    for (i=0; i<=l1; i++)
        c[l1-i]=a[i];
    for (i=0; i<=l2; i++)
        d[l2-i]=b[i];
    for(i=0; i<L; i++)
        for(j=0; j<L; j++)
            m[i][j]='0';

    for(i=0; i<=l2; i++)
    {
        cy=0;
        for(j=0; j<=l1; j++)
        {
            t = (c[j]-48)*(d[i]-48)+cy;
            if (t>9)
            {
                u=t%10;
                cy=t/10;
            }
            else
            {
                u=t;
                cy=0;
            }
            m[i][j+i]=u+48;
        }
        if(cy>0) m[i][j+i]=cy+48;
    }

    cy=0;
    for(j=0; j<L; j++)
    {
        s=0;
        for(i=0; i<=l2; i++)
        {
            s = s + (m[i][j]-48);
        }
        s = s + cy;
        if (s>9)
        {
            u=s%10;
            cy=s/10;
        }
        else
        {
            u=s;
            cy=0;
        }
        r[j]= u+48;
    }

    for(i=L-1; i>=0; i--)
        if (r[i]!='0') break;
    M=i;
    if (M==-1)
    {
        f[0]='0';
        f[1]='\0';
    }
    else
    {
        for (i=0; i<=M; i++)
            f[M-i]=r[i];
        f[i]='\0';
    }
}

int main()
{
    int n, a=1,i;
    char b[1000];
    itoa(a,f);
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Factorial of %d = ", n);
    for(i=1; i<=n; i++)
    {
        itoa(i,b);
        mult(f,b);
        printf("|| %s %s %d %d ||\n",b,f, strlen(b), strlen(f));
    }
    printf("%s\n", f);
}
