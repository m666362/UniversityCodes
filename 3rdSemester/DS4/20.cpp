
#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n <= 1)
    {
        return 1;
    }
    double digits = 0;
    for (int i=2; i<=n; i++)
    {
        digits += log10(i);
    }
    return floor(digits) + 1;
}

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("There are %d digits in %d!\n", f(n), n);
    return 0;
}
