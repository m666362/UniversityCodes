#include<stdio.h>
#include<math.h>
int main()
{
    int n,b,c;
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("How many bits to shift left: ");
    scanf("%d", &n);
    c=pow(2,n);
    printf("%d", (b>>n)/c);
}
