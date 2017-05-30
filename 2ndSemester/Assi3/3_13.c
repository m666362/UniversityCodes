#include<stdio.h>
int main()
{
	int n, f = 0, s = 1, ne, i;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	for (i = 0; i < n+1; i++)
	{
		if (i <= 1)
			ne = i;
		else
		{
			ne = f + s;
			f = s;
			s = ne;
		}
	}
	printf("%dth Fibonacci value= %d ", n,ne);

	return 0;
}
