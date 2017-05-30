
#include<stdio.h>

char s[1000];
int top = 0;

push(char item)
{
    s[++top] = item;
}

char pop()
{
    return (s[top--]);
}

int check(char item)
{
    switch (item)
    {
    case ')':
        return 0;
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    case '^':
        return 4;
    }
}

main()
{
    char infix[1000], postfix[1000], ch;
    int i = 0, k = 0;
    printf("Enter an infix expression:\n");
    gets(infix);
    push(')');
    while ((ch = infix[i++]) != '\0')
    {
        if (ch == '(')
        {
            push(ch);
        }

        else if (ch >= '0' && ch <= '9')
        {
            postfix[k++] = ch;
        }
        else if (ch == ')')
        {
            while (s[top] != '(')
            {
                postfix[k++] = pop();
            }
        }
        else
        {
            while (check(s[top]) >= check(ch))
            {
                postfix[k++] = pop();
            }
            push(ch);
        }
    }
    while (s[top] != ')')
    {
        postfix[k++] = pop();
    }
    postfix[k] = '\0';
    printf("\nGiven Infix expression: %s & Postfix expression of the given expression = ", infix);
    for(i=0; i<k; i++)
    {
        printf("%c ", postfix[i]);
    }
    return 0;
}

