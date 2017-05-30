#include<stdio.h>

void rev()
{
    char c;
    if((c = getchar()) != '\n')
        rev();
    putchar(c);
    return;
}

int main()
{
    printf("Enter a line to reverse: ");
    rev();
}
