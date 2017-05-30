
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char a[1000];
	int sa,i,j,c=0, flag=0;
	printf("Enter a string:\n");
	gets(a);
	sa=strlen(a);
	printf("\n");
	for(i=65; i<=90; i++)
    {
        c=0;
        flag=0;
        for(j=0; j<sa; j++)
        {
            if(i== toupper(a[j]))
            {
                flag=1;
                c++;
            }
        }
        if(flag==1)
        {
            printf("%c = %d\n", i, c);
        }
    }
	return 0;
}
