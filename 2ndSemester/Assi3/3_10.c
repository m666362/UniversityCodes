#include<stdio.h>
#include<string.h>
int main()
{
    char ms[100], rs[100];
    printf("Enter a word: ");
    gets(ms);
    strcpy(rs, ms);
    strrev(rs);
    if(strcmp(ms,rs) == 0) {
        printf("%s is Palindrome\n", ms);
    }
    else {
        printf("%s is Not palindrome\n", ms);
    }
    return 0;
}
