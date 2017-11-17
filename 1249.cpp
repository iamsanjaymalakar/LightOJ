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
 
 
int main()
{
    int cs;
    cin >> cs;
    REP(i,cs)
    {
        int n;
        cin >> n;
        string s[105];
        int l[105],w[105],h[105];
        REP(j,n)
        {
            cin >> s[j] >> l[j] >> w[j] >> h[j];
        }
        int f=0,t,p;
        int min=inf,max=-inf;
        REP(j,n)
        {
            ll temp=l[j]*w[j]*h[j];
            if(temp<min)
            {
                min=temp;
                p=j;
            }
            if(temp>max)
            {
                max=temp;
                t=j;
            }
        }
        if(max==min)
            cout << "Case " << i+1 << ": no thief" << endl;
        else
        {
            cout << "Case " << i+1 << ": " << s[t] << " took chocolate from " << s[p] << endl;
        }
    }
}
