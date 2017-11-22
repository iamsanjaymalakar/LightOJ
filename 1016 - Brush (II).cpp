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
#define sf(a) scanf("%d",&a);
#define sf2(a,b) scanf("%d %d",&a,&b);
#define pf printf



int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    int cs;
    sf(cs);
    REP(t,cs)
    {
        int n,w;
        sf2(n,w);
        int x[n],y[n];
        REP(i,n)
        {
            sf2(x[i],y[i]);
        }
        sort(y,y+n);
        int ans(1);
        int a=y[0];
        REP(i,n-1)
        {
            if((y[i+1]-a)>w)
            {
            a=y[i+1];
            ans++;
            }
        }
    pf("Case %d: %d\n",t+1,ans);

    }

}

/*
2

3 2
0 0
20 2
30 2

3 1
0 0
20 2
30 2
*/


