
#include<stdio.h>
int top = 0, max = 49, item;
int stack[50];
void show()
{
	int i;
	printf("The stack is: ");
	if (top > 0)
	{
		for (i = 1; i <= top; i++)
		{
			printf("%d ", stack[i]);
		}
	}
	else
	{
		printf("empty");
	}

	printf("\n\n");
}

void push()
{
	printf("Enter an element:\n");
	scanf("%d", &item);
	if (top == max)
	{
		printf("Overflow\n");

	}
	else
	{
		top++;
		stack[top] = item;
	}
	show();
}

void pop()
{
	if (top == 0)
	{
		printf("Underflow\n");
	}
	else
	{
		item = stack[top];
		top--;
		printf("Popped item = %d\n", item);
	}
	show();
}

menu(void)
{
	int choice;
	do
	{
		printf("1-Push\n2-Pop\n3-Exit\n");
		scanf("%d", &choice);
	}
	while (choice < 1 || choice > 3);
	return (choice);
}

main()
{
	int choice;
	do
	{
		choice = menu();
		switch (choice)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printf("end of operation\n");
			break;
		}
	}
	while (choice != 3);
	return ;
}

