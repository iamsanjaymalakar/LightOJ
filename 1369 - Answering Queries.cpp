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
 
const int N = 1000001;
 
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define ull unsigned long long
#define inf 1e9
#define debug printf("test\n");
#define endl "\n"
 
ll f(ll b[],int k)
{
    ll sum=0;
    REP(i,k)
    {
        ll A=b[i];
        ll n=k;
        sum+=(A*(n-1-i)+(0-i)*A);
        //cout << sum << endl;
    }
    return sum;
}
 
 
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int cs;
    scanf("%d",&cs);
    REP(it,cs)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        ll a[n];
        REP(i,n)
        {
            scanf("%lld",&a[i]);
        }
        ll ans = (ll)f(a,n);
        printf("Case %d:\n",it+1);
        REP(itt,q)
        {
            int temp;
            scanf("%d",&temp);
            if(temp)
                printf("%lld\n",ans);
            else
            {
                ll x,v;
                scanf("%lld %lld",&x,&v);
                ans-=((a[x]*(n-1-x)+(0-x)*a[x]));
                ans+=(v*(n-1-x)+(0-x)*v);
                a[x]=v;
            }
        }
    }
}
