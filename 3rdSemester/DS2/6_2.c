
#include<stdio.h>
#include<math.h>
#include<string.h>

int stack[1000], MAX=999;
char stack2[999];
int top = 0;
push(int tmp)
{
	stack[++top] = (stack2[tmp] - 48);
}

pop(char c)
{
	int a, b, ans;
	a = stack[top];
	stack[top] = '\0';
	top--;
	b = stack[top];
	stack[top] = '\0';
	top--;
	switch (c)
	{
	case '+':
		ans = b + a;
		break;
	case '-':
		ans = b - a;
		break;
	case '*':
		ans = b * a;
		break;
	case '/':
		ans = b / a;
		break;
	case '^':
		ans = pow(b,a);;
		break;
	default:
		ans = 0;
	}
	top++;
	stack[top] = ans;
}

main()
{
	int i;
	printf("Insert a postfix notation = ");
	gets(stack2);

	for (i = 0; i < strlen(stack2); i++)
	{
		if (stack2[i] >= '0' && stack2[i] <= '9')
		{
			push(i);
		}
		if (stack2[i] == '+' || stack2[i] == '-' || stack2[i] == '*' || stack2[i] == '/' || stack2[i] == '^')
		{
			pop(stack2[i]);
		}
	}
	printf("\n\nResult = %d\n", stack[top]);

	return 0;
}

