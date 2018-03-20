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
#include <ctime>
#include <sstream>

using namespace std;

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define ull unsigned long long
#define inf 1e9
#define sf(a) scanf("%d",&a);
#define sf2(a, b) scanf("%d %d",&a,&b);
#define sf3(a, b, c) scanf("%d %d %d",&a,&b,&c);
#define pf printf
#define mset(a, b) memset(a,b,sizeof(a))
#define itf it->first
#define its it->second

typedef struct node Node;

int n,m;
char g[24][24];
int d[24][24];
bool visited[24][24];


void bfs(int x,int y)
{
    mset(d,inf);
    mset(visited,false);
    d[x][y]=0;
    queue < pair<int,int> > Q;
    Q.push(make_pair(x,y));
    visited[x][y]=true;
    while(!Q.empty())
    {
        pair <int,int> temp=Q.front();
        Q.pop();
        int tx=temp.first,ty=temp.second;
        //up
        if(tx-1>0 and g[tx-1][ty]!='m' and g[tx-1][ty]!='#' and !visited[tx-1][ty])
        {
            d[tx-1][ty]=d[tx][ty]+1;
            visited[tx-1][ty]=true;
            Q.push(make_pair(tx-1,ty));
        }
        //down
        if(tx+1<m and g[tx+1][ty]!='m' and g[tx+1][ty]!='#' and !visited[tx+1][ty])
        {
            d[tx+1][ty]=d[tx][ty]+1;
            visited[tx+1][ty]=true;
            Q.push(make_pair(tx+1,ty));
        }
        //left
        if(ty-1>0 and g[tx][ty-1]!='m' and g[tx][ty-1]!='#' and !visited[tx][ty-1])
        {
            d[tx][ty-1]=d[tx][ty]+1;
            visited[tx][ty-1]=true;
            Q.push(make_pair(tx,ty-1));
        }
        //right
        if(ty+1<n and g[tx][ty+1]!='m' and g[tx][ty+1]!='#' and !visited[tx][ty+1])
        {
            d[tx][ty+1]=d[tx][ty]+1;
            visited[tx][ty+1]=true;
            Q.push(make_pair(tx,ty+1));
        }
    }

}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int cs;
    cin >> cs;
    REP(t,cs)
    {
        mset(g,0);
        int ax,ay,bx,by,cx,cy,hx,hy;
        sf2(m,n);
        REP(i,m)
        {
            getchar();
            REP(j,n)
            {
                scanf("%c",&g[i][j]);
                if(g[i][j]=='a')
                {
                    ax=i;
                    ay=j;
                }
                else if(g[i][j]=='b')
                {
                    bx=i;
                    by=j;
                }
                else if(g[i][j]=='c')
                {
                    cx=i;
                    cy=j;
                }
                if(g[i][j]=='h')
                {
                    hx = i;
                    hy = j;
                }
            }
        }
        d[hx][hy]=0;
        bfs(hx,hy);
        int ans = max(d[ax][ay],max(d[bx][by],d[cx][cy]));
        pf("Case %d: %d\n",t+1,ans);
    }
}

