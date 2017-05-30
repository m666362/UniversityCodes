#include<stdio.h>
int main()
{
    int i,e;
    printf("Enter initial value: ");
    scanf("%d", &i);
    printf("Enter ending value: ");
    scanf("%d", &e);
    printf("Numbers from %d to %d are given below:\n", i, e);
    while(i<=e)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}
