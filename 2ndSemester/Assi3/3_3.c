#include<stdio.h>
int main()
{
    int n,r,s=0,c=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n) {
        r=n%10;
        s+=r;
        n/=10;
        c++;
    }
    printf("%d\n",s);
    return main();
}
