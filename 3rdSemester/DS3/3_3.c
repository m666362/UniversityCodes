
#include<stdio.h>
int c=0, a1[100], a3[100], a2[100], t1=0, t2=0, t3=0;
void pp(char a, char b)
{
    int item;
    switch(a)
    {
    case 'a':
        item=a1[t1--];
        printf("Moving %d on the ", item);
        break;
    case 'b':
        item=a2[t2--];
        printf("Moving %d on the ", item);
        break;
    case 'c':
        item=a3[t3--];
        printf("Moving %d on the ", item);
        break;

    }
    switch(b)
    {
    case 'a':
        a1[++t1]=item;
        printf("1st tower\n");
        break;
    case 'b':
        a2[++t2]=item;
        printf("2nd tower\n");
        break;
    case 'c':
        a3[++t3]=item;
        printf("3rd tower\n");
        break;
    }
    return;
}
int tower(int N, char BEG, char AUX, char END)
{
    if(N==1)
    {
        c++;
        pp(BEG,END);
        printf("(%c to %c)\n", BEG,END);
        return c;
    }
    else
    {
        tower(N-1, BEG,END,AUX);
        pp(BEG,END);
        printf("(%c to %c)\n", BEG,END);
        tower(N-1,AUX,BEG,END);
        c++;
    }
    return;
}
main()
{
    int n,i,j;
    char b='a', a='b', e='c';
    printf("Enter the number of disks:\n");
    scanf("%d", &n);
    for(i=1, j=n; i<=n; i++, j--)
    {
        a1[i]=j;
    }
    t1=n;
    printf("\n");
    tower(n,b,a,e);
    printf("\nTotal move = %d\n", c);
    return 0;
}
