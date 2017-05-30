
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int i, j, k, l, f = 0, g = 0, m, h, v;
	printf("Enter the string:\n");
	gets(a);
	printf("Enter the substring:\n");
	gets(b);
	l = strlen(b);
	m = strlen(a);
	for (i = 0; a[i] != '\0'; i++)
	{
		k = i;
		j = 0;
		while (b[j] != '\0')
		{
			if (a[k] == b[j])
			{
				g++;
				if (g == l)
				{
					f = 1;
					h = i;
				}
			}
			else if (a[k] != b[j])
			{
				break;
			}
			j++;
			k++;
		}
	}
	if (f == 1)
	{
		printf("After deleting:\n");
		for (i = 0; i < m; i++)
		{
			if (i < h)
				printf("%c", a[i]);
			else if (i > h && i < (h + l))
				continue;
			else if (i >= (h + l))
				printf("%c", a[i]);
		}
	}
	else if (f == 0)
	{
		printf("substring not found\n");
	}
	return 0;
}

