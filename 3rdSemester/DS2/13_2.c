
#include<stdio.h>
#include<math.h>
int b1, b2;

dectob(int n)
{
	int r[100], b[100], i, j;
	for (i = 0; n != 0; i++)
	{
		r[i] = n % b2;
		n /= b2;
	}
	printf("Converted form of the number= ");
	for (j = 0; j < i; i--)
	{
		printf("%d ", r[i - 1]);
	}
}

btodec(int n)
{
	int n1, r[100], i = 0, j, dec, sum = 0;
	n1 = n;
	while (n)
	{
		r[i] = n % 10;
		i++;
		n /= 10;
	}
	for (j = 0; j < i; j++)
	{
		dec = r[j] * pow(b1, j);
		sum += dec;
	}
	return sum;
}

main()
{
	int n1, dec, b;
	printf("Enter a number:\n");
	scanf("%d", &n1);
	printf("Enter base of number:\n");
	scanf("%d", &b1);
	printf("Enter a base to convert the number:\n");
	scanf("%d", &b2);
	dec = btodec(n1);
	dectob(dec);
	return 0;
}