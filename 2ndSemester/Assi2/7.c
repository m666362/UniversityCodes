#include<stdio.h>
int main()
{
    char a,b,a1,b1;
    printf("Enter Two choices: ");
    scanf("%c %c", &a1, &b1);
    a=tolower(a1);
    b=tolower(b1);
    if ((a=='r' && b=='p')||(a=='p' && b=='r')) printf("Paper wins");
    else if ((a=='s' && b=='p')||(a=='p' && b=='s')) printf("Scissor wins");
    else if ((a=='r' && b=='s')||(a=='s' && b=='r')) printf("Rock wins");
    else printf("Tie");
}
