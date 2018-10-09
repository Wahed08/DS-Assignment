#include<iostream>
#include<stdio.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;
int node,edge;
int adj[100][100];
int color[100],i;

void dfsvisit(int x)
{
    color[x]=GRAY;
    for(int i=0; i<node; i++)
    {
        if(adj[x][i]==1)
        {
            if(color[i]==WHITE)
            {
                dfsvisit(i);
            }
        }
    }
    color[x]=BLACK;
    cout<<" "<<x;
}
void dfs(int)
{
    for(int i=0; i<node; i++)
    {
        color[i]=WHITE;
    }
    for(int i=0; i<node; i++)
    {
        if(color[i]==WHITE)
        {
            dfsvisit(i);
        }
    }
}
int main()
{
    cin>>node>>edge;
    int a,b;
    for(int i=0; i<edge; i++)
    {
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    dfs(2);

    return 0;
}
