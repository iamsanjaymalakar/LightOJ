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
 
 
int main()
{
    int cs,a,b,c,lw=0,rw=0;
    sf(cs);
    bool l[101],r[101];
    REP(t,cs)
    {
        getchar();
        mset(l, false);
        mset(r, false);
        lw=rw=0;
        int n;
        sf(n);
        REP(i,n)
        {
            sf3(a, b, c);
            if(!r[a] && !l[b]) // a->b
            {
                rw+=c;
                r[a]=l[b]=true;
            }
            else // a<-b
            {
                lw+=c;
                l[a]=r[b]=true;
            }
        }
        pf("Case %d: %d\n",t+1,min(lw,rw));
    }
}
