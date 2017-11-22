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
    getchar();
    REP(j,cs)
    {
        string a,b;
        getline(cin,a);
        getline(cin,b);
        int i=0;
        while(a[i])
        {
            if(a[i]>='A' && a[i]<='Z')
                a[i]=a[i]-'A'+'a';
            i++;
        }
        i=0;
        while(b[i])
        {
            if(b[i]>='A' && b[i]<='Z')
                b[i]=b[i]-'A'+'a';
            i++;
        }
        i=0;
        ll t1=0,t2=0;
        while(a[i])
        {
            if(a[i]!=' ')
                t1+=a[i];
            i++;
        }
        i=0;
        while(b[i])
        {
            if(b[i]!=' ')
                t2+=b[i];
                i++;
        }
        //cout << a << " " << b << endl << t1 << " " << t2 << endl;
        if(t1==t2)
            cout << "Case " << j+1 << ": Yes" << endl;
        else
            cout << "Case " << j+1 << ": No" << endl;
    }
}
