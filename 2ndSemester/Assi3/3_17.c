#include <stdio.h>
int main()
{
	int a, b, x, y, t, gcd, lcm;
	printf("Enter two integers: ");
	scanf("%d%d", &x, &y);
	a = x;
	b = y;
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	gcd = a;
	printf("GCD = %d", gcd);
	return 0;
}


