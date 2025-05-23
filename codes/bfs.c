#include<stdio.h>
#include<stdlib.h>

int v=3;
int m[3][3]={{0,1,1},{1,0,1},{1,1,0}};
int visited[3];

void bfs(int m[3][3],int v,int source);

int main()
{
    int source,i;
    printf("Enter source:");
    scanf("%d",&source);
    for(i=0;i<v;i++)
        visited[i]=0;
    printf("The BFS traversal is......\n");
    bfs(m,v,source);
}
void bfs(int m[3][3],int v,int source)
{
    int queue[3];
    int front=0,rear=0,u,i;
    queue[rear]=source;
    visited[source]=1;
    while(front<=rear)
    {
        u=queue[front];
        printf("%d\t",u);
        front=front+1;

        for(i=0;i<v;i++)
        {
            if(m[u][i]==1&&visited[i]==0)
            {
                visited[i]=1;
                rear=rear+1;
                queue[rear]=i;
            }
        }
    }
}
