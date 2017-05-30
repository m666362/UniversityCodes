#include<stdio.h>
struct {
    char name[100];
    char address[100];
} member[100], temp;

main()
{
    int n,i,item;
    printf("Number of members: ");
    scanf("%d", &n);
    for(i=0; i<n;i++) {
            printf("Member no: %d\nName: ", i+1);
        scanf(" %[^\n]", &member[i].name);
            printf("\nAddress: ");
        scanf(" %[^\n]", &member[i].address);
    }
    for(item = 0; item<n-1; item++)
    {
        for(i=item+1; i<n;i++)
        {
            if(strcmp(member[item].name , member[i].name ) > 0)
            {
                temp= member[item];
                member[item] = member[i];
                member[i] = temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("Member %d\nName: %s\nAddress: %s\n", i+1, member[i].name, member[i].address);
    }
}
