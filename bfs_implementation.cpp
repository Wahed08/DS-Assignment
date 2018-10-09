#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];
int parent[100];
int dis[100];

int node,edge;

void bfs(int startingnode)
{
    for(int i=0; i<node; i++)
    {
        color[i]=WHITE;
        dis[i]=-2147483648;
        parent[i]=-1;
    }
    dis[startingnode]=0;
    parent[startingnode]=-1;

    queue<int>q;
    q.push(startingnode);

    while(!q.empty())
    {
        int x;
        x=q.front();
        q.pop();
        color[x]=GRAY;
      cout<<" "<<x;
        for(int i=0; i<node; i++)
        {
            if(adj[x][i]==1)
            {
                if(color[i]==WHITE)
                {
                    //x er neighber
                    //x er node hocche i no node er parent
                    dis[i]=dis[x]+1;
                    parent[i]=x;
                    q.push(i);
                }
            }
        }
     //  color[x]=BLACK;
    }
}

int main()
{
   //freopen("input.mak", "r", stdin);
    cin>>node>>edge;

    int a,b;
    for(int i=0; i<edge; i++)
    {
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    bfs(0);
    cout<<parent[5]<<endl;
    cout<<dis[3];

    return 0;
}

