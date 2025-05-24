#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int dist[20];
int path[20];
int visited[20];

int minimum(int v);
int mini_D(int d,int k);
void Dijkstras(int v,int cost[v][v]);

int main()
{
    int v,m;
    int MAX=9999;
    int src,i;
    printf("Enter the nor.of vertices\n");
    scanf("%d",&v);

    int cost[v][v];
    printf("Enter wights of edges:\n");
    for(int d=0;d<v;d++)
    {
        for(int r=0;r<v;r++)
        {
            scanf("%d",&cost[d][r]);
        }
    }
    printf("Enter source:");
    scanf("%d",&src);

    for(i=0;i<v;i++)
    {
        dist[i]=cost[src][i];
        path[i]=src;
    }

    visited[src]=1;
    Dijkstras(v,cost);
    for(i=0;i<v;i++)
    {
        printf("%d\t",dist[i]);
    }
    printf("\n");

    for(i=0;i<v;i++)
    {
        printf("%d\t",path[i]);
    }
    printf("\n");

    for(i=0;i<v;i++)
    {
        printf("%d\t",visited[i]);
    }

    return 0;
}


int mini_D(int d,int k)
{
    if(d>k)
        return 1;
    else
        return 0;
}


int minimum(int v)
{
    int i;
    int min=INT_MAX;
    int k = 0;
    for (i = 0; i < v; i++)
    {
        if (dist[i] < min && visited[i] == 0)
        {
            min = dist[i];
            k = i;
        }
    }
    return k;
}
void Dijkstras(int v,int cost[v][v])
{
    int i,j,m;
    for(i=0;i<v;i++)
    {
        int u=minimum(v);
        visited[u]=1;
        printf("%d\n",u);
        for(int j=0;j<v;j++)
        {
            if(visited[j]==0)
            {
                m=mini_D(dist[j],(dist[u]+cost[u][j]));
                if(m==1)
                {
                    dist[j]=(dist[u]+cost[u][j]);
                    path[j]=u;
                }
            }
        }
    }
}
