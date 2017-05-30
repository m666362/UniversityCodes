
#include<stdio.h>
#include<conio.h>
void main()
{
	int fib[1000];
	int i, n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	fib[0] = 0;
	fib[1] = 1;
	for (i = 2; i <= n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	 for (i = 0; i <= n; i++)
	{
		printf("Fib(%d)= %d\n", i, fib[i]);
	}

}
