#include<stdio.h>
int main()
{
    char c1,c,ch;
    printf("Enter a character: ");
    scanf("%c", &c1);
    c=tolower(c1);
    if (c=='a' || c =='e' || c=='i' || c=='o' || c=='u')
    {
        printf("%c is a Vowel",c1);
    }
    else
    {
        printf("%c is a consonant",c1);
    }
    return 0;
}
