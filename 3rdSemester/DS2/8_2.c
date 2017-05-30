
#include<stdio.h>

main()
{
    int n,i, j, k,l, choice;
    char a[1000], b[1000];
    printf("1-Find length of a string\n");
    printf("2-Copy string S2 to S1\n");
    printf("3-Concatenate string S2 to S1\n");
    printf("4-Compare two strings S1 & S2\n");
    printf("5-Reverse string\n");
    scanf("%d", &n);
    do
    {
        if(n==1)
        {
            printf("Enter a string:\n");
            scanf("%s", &a);
            for(i=0; ; i++)
            {
                if(a[i]== '\0')
                {
                    break;
                }
            }
            printf("Length = %d\n", i);
        }
        else if(n==2)
        {
            printf("Enter string S1:\n");
            scanf("%s", &a);
            printf("Enter string S2:\n");
            scanf("%s", &b);
            for(i=0; ; i++)
            {
                if(b[i]== '\0')
                {
                    break;
                }
            }
            for(j=0; j<=i ; j++)
            {
                a[j] = b[j];
            }
            printf("String S1 = %s\n", a);
        }
        else if(n==3)
        {
            printf("Enter string S1:\n");
            scanf("%s", &a);
            printf("Enter string S2:\n");
            scanf("%s", &b);
            for(i=0; ; i++)
            {
                if(a[i]== '\0')
                {
                    break;
                }
            }
            for(j=0; ; j++)
            {
                if(b[j]== '\0')
                {
                    break;
                }
            }
            l=j;
            for(k=i, l=0; k<=(i+j) ; k++, l++)
            {
                a[k] = b[l];
            }

            printf("String S1 = %s\n",a);
        }
        else if(n==4)
        {
            int flag=0;
            printf("Enter string S1:\n");
            scanf("%s", &a);
            printf("Enter string S2:\n");
            scanf("%s", &b);
            for(i=0; ; i++)
            {
                if(a[i]== '\0')
                {
                    break;
                }
            }
            for(j=0; j<=i; j++)
            {
                if(a[j] != b[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("Both the strings are same\n");
            }
            else
            {
                printf("Both the strings are NOT same\n");
            }
        }
        else if(n==5)
        {
            printf("Enter string S1:\n");
            scanf("%s", &a);
            for(i=0; ; i++)
            {
                if(a[i]== '\0')
                {
                    break;
                }
            }
            for(i-- ; i>=0 ; i--)
            {
                printf("%c", a[i]);
            }
        }
        else
        {
            printf("Wrong input!!Starting the program again\n\n");
            return main();
        }
    }
    while (choice != 3);
}
