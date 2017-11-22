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
 
#define NULL_VALUE -999999
#define INFINITY 999999
#define WHITE 1
#define GREY 2
#define BLACK 3
 
const int mn = 1000001;
 
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define ull unsigned long long
 
int visit[21][21];
int cnt=0;
 
void DFS(int r, int c,char **a, int rsize, int csize)
{
    visit[r][c]=1;
    cnt++;
    if((c+1)<csize)
    {
        if(a[r][c+1]=='.' && visit[r][c+1]==0)
        {
            DFS(r,c+1,a,rsize,csize);
        }
    }
    if((c-1)>=0 )
    {
        if(a[r][c-1]=='.' && visit[r][c-1]==0)
        {
            DFS(r,c-1,a,rsize,csize);
        }
    }
 
    if((r-1)>=0)
    {
        if(a[r-1][c]=='.' && visit[r-1][c]==0)
        {
            DFS(r-1,c,a,rsize,csize);
        }
    }
 
    if((r+1)<rsize)
    {
        if(a[r+1][c]=='.' && visit[r+1][c]==0)
        {
            DFS(r+1,c,a,rsize,csize);
        }
    }
 
    //cout << cnt << endl;
}
 
int main()
{
    int t;
    cin>>t;
 
    int inr,inc;
 
    for(int T=0; T<t;T++)
    {
        int r, c;
        cin>>c>>r;
 
        cnt=0;
 
        char **a;
        a = new char *[r];
        REP(i,r)
            a[i] = new char[c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
 
                cin >> a[i][j];
                visit[i][j]=0;
 
                if(a[i][j]=='@')
                {
 
                    inr=i;
                    inc=j;
                    //printf("%d %d\n",inr,inc);
                }
            }
        }
 
        DFS(inr,inc,a,r,c);
 
        cout<<"Case "<<T+1<<": "<<cnt<<endl;
 
 
 
 
    }
}
