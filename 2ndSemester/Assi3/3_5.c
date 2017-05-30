#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the value of X: ");
    scanf("%d", &x);

    for(i=1;i<=10;i++) {
        printf("%d X %d = %d\n",x,i,x*i);
    }
    return 0;
}
