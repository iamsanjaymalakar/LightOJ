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
 
 
 
int n,k;
int a[1005];
 
bool check(int m)
{
    int c=1;
    int s=0;
    REP(i,n)
    {
        s+=a[i];
        if(s>m)
        {
            c++;
            s=a[i];
        }
    }
    if(c<=k)
        return true;
    return false;
}
 
void prnt(int num)
{
    int sum=0,c=0;
    for(int i = 0; i < n; i++)
    {
        if(sum+a[i]>num || n-i<k-c)
        {
            c++;
            printf("%d\n",sum);
            sum=a[i];
        }
        else
            sum+=a[i];
    }
    printf("%d\n",sum);
}
 
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int cs;
    cin >> cs;
    REP(t,cs)
    {
        cin >> n >> k;
        n++;
        k++;
        int sum=0;
        int lo=-inf;
        REP(i,n)
        {
            cin >> a[i];
            sum+=a[i];
            lo=max(lo,a[i]);
        }
        int hi=sum;
        int mid=inf;
        while(lo<hi)
        {
            mid=(lo+hi)/2;
            if(check(mid))
                hi=mid;
            else
                lo=mid+1;
        }
        cout << "Case " << t+1 << ": " << hi << endl;
        prnt(hi);
    }
}
 
/*
1
4 3
7
2
6
4
5
*/
