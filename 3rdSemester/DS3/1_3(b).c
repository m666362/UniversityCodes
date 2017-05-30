
#include<stdio.h>
int f(int n)
{
	if (n<=1)
	return 1;
	else return n*f(n-1);
}
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	printf("Factorial of %d = %d\n", n,f(n));
	return 0;
}
