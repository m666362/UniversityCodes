
#include<stdio.h>
int f(int n)
{
	if (n<=1)
	return n;
	else return f(n-1)+f(n-2);
}
int main()
{
	int n,i;
	printf("Enter a number:\n");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		printf("Fib(%d)=%d\n", i, f(i));
	}
	return 0;
}
