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




//solve using floyd warshal

int g[101][101];
int p[101][101];
int dist[101][101];

void floydwarshal(int n)
{
    FOR(i,1,n)
    {
        FOR(j,1,n)
        {
            dist[i][j]=g[i][j];
        }
    }

    FOR(k,1,n)
    {
        FOR(i,1,n)
        {
            FOR(j,1,n)
            {
                if(dist[i][k]+dist[k][j]<dist[i][j])
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
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
        int n, m;
        cin >> n >> m;
        REP(i, n)
        {
            REP(j, n)
            {
                if (i == j)
                    g[i + 1][j + 1] = 0;
                else
                    g[i + 1][j + 1] = inf;
            }
        }
        int u, v;
        REP(i, m)
        {
            cin >> u >> v;
            u = u + 1, v = v + 1;
            g[u][v] = 1;
            g[v][u] = 1;
        }
        int s, d;
        cin >> s >> d;
        floydwarshal(n);
        int ans = -inf;
        REP(i, n)
        {
            ans = max(ans, dist[s + 1][i + 1] + dist[i + 1][d + 1]);
        }
        cout << "Case " << t+1 << ": " << ans << endl;
    }

}



