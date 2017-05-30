
#include<stdio.h>
main()
{
    FILE *p;
    int i,n[120];
    p=fopen("RAND.DAT", "w+");
    for(i=1; i<=100; i++)
    {
        fprintf(p, "%d ", rand(i)%100);
    }
    fclose(p);

    FILE *q;
    q=fopen("RAND.DAT", "r+");
    for(i=1; i<=100; i++)
    {
        fscanf(q, "%d", &n[i]);
    }
    for(i=1; i<=100; i++)
    {
        printf("%d ", n[i]);
    }
    fclose(q);
}
