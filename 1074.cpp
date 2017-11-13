//============================================================================
// Author       : Sanjay Malakar
//============================================================================

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;


#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define ull unsigned long long
#define inf 1e9

ll dist[205];
bool visited[205];
ll busy[205];

class Graph
{
public:
    int V,E;
    vector < pair<int,int> > adj[205];

    void addEdge(int u,int v,int w)
    {
        adj[u].push_back(make_pair(v,w));
        //if undirected
       // adj[v].push_back(make_pair(u,w));
    }

    void printGraph()
    {
        REP(i,V)
        {
            cout << i << "  :   ";
            for(vector < pair<int,int> >::iterator it=adj[i].begin(); it!=adj[i].end(); it++)
            {
                cout << it->first << " ";
            }
            cout << endl;
        }
    }

    void printGraph2()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Node " << i << " makes an edge with \n";
            for (vector < pair<int,int> >::iterator it = adj[i].begin(); it!=adj[i].end(); it++)
            {
                cout << "\tNode " << it->first << " with edge weight =" << it->second << "\n";
            }
            cout << "\n";
        }
    }


    void relax(int u,int v,int w)
    {
        if(dist[v]>(dist[u]+w))
        {
            dist[v]=dist[u]+w;
        }
    }

    bool bf(int s)
    {
        REP(i,V)
        {
            dist[i+1]=inf;
        }

        dist[s]=0;

        for(int k=1;k<V;k++)
        {
            for(int j=1;j<=V;j++)
            {
                int u=j;
                for(vector < pair<int,int> >::iterator it = adj[u].begin(); it!=adj[u].end(); it++)
                {
                    int v=it->first;
                    int w=it->second;
                    relax(u,v,w);
                }
            }
        }

        bool f=true;

        for(int j=1;j<=V;j++)
            {
                int u=j;
                for(vector < pair<int,int> >::iterator it = adj[u].begin(); it!=adj[u].end(); it++)
                {
                    int v=it->first;
                    int w=it->second;
                    if(dist[v]>(dist[u]+w))
                        f=false;
                }
            }

        return f;
    }

    Graph(int n,int m)
    {
        V=n;
        E=m;
    }

    void dfs(int s)
    {
        visited[s]=true;
        for(vector < pair<int,int> >::iterator it = adj[s].begin(); it!=adj[s].end(); it++)
        {
            if(visited[it->first]==false)
                dfs(it->first);
        }
    }

    ~Graph()
    {
        REP(i,V)
        {
            adj[i].clear();
        }
    }
};

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int cs;
    cin >> cs;
    REP(t,cs)
    {
        int n;
        cin >> n;
        REP(i,n)
        {
            cin >> busy[i+1];
        }
        int m;
        cin >> m;
        Graph g(n,m);
        REP(i,m)
        {
            int u,v;
            cin >> u >> v;
            int w=busy[v]-busy[u];
            g.addEdge(u,v,w*w*w);
        }
        g.bf(1);
        g.dfs(1);
        int q;
        cin >> q;
        printf("Case %d:\n",t+1);
        REP(i,q)
        {
            int a;
            cin >> a;
            if(dist[a]>2 && dist[a]<inf && visited[a])
                cout << dist[a] << "\n";
            else
                cout<< "?\n";
        }
        memset(dist,0,sizeof(dist));
        memset(busy,0,sizeof(busy));
        memset(visited,0,sizeof(visited));
    }
    return 0;
}
