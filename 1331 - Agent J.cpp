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
        double r1,r2,r3;
        cin >> r1 >> r2 >> r3;
        double a,b,c,A,B,C;
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;
        double s=0.5*(a+b+c);
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        C=acos((a*a+b*b-c*c)/(2.0*a*b));
        A=acos((c*c+b*b-a*a)/(2.0*c*b));
        B=acos((a*a+c*c-b*b)/(2.0*a*c));
        double ans  = area - 0.5*r1*r1*(C) - 0.5*r2*r2*(B) -0.5*r3*r3*(A);
       // cout << ans << endl;
        printf("Case %d: %.10f\n",i+1,ans);
    }
    return 0;
}
