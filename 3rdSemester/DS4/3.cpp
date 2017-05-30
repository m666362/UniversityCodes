
#include<bits/stdc++.h>
using namespace std;

int compare (const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n,a[200], i;
    printf("How many numbers to sort:\n");
    scanf("%d", &n);
    printf("enter %d numbers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nAfter sorting:\n");
    qsort(a, n, sizeof(int), compare);
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

