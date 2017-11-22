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
        cout << "Case " << i+1 << ":" << endl;
        int n;
        cin >> n;
        int sum=0;
        REP(j,n)
        {
            int a;
            string s;
            cin >> s;
            if(s=="donate")
            {
                cin >> a;
                sum+=a;
            }
            else if(s=="report")
            {
                cout << sum << endl;
            }
        }
    }
}
