
#include<bits/stdc++.h>
using namespace std;
#define max 20
int adj[max][max], visited[max],n;

void create_graph()
{
    int i, max_edges, origin, destin;
    printf("Enter number of nodes:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Enter edges %d:[0 0 to quit]:\n");
        scanf("%d %d", &origin, &destin);
        if(origin==0 && destin==0)
        {
            break;
        }
        if(origin>n || destin>n || origin<0 || destin<0)
        {
            printf("Invalid edges\n");
            i--;
        }
        else
        {
            adj[origin][destin]=1;
        }
    }
}

void display()
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d", adj[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}

void dfs(int v)
{
    int i,j;
    visited[v]=1;
    printf("%d ",v);
    for(i=1; i<=n; i++)
    {
        if(adj[v][i]==1 && visited[i]==0)
        {
            dfs[i];
        }
    }
}


int main()
{
    int i,v,choice;
    create_graph();
    printf("Enter starting node for BFS:\n");
    scanf("%d", &v);
    for(i=1; i<=n; i++)
    {
        visited[i]=0;
    }
    dfs(v);
    return 0;
}
