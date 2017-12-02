#include <stdio.h>
int oneCount(int n)
    {
    int count = 0;
    long long t = 1;
    for(t = 1; t<=n; t*=2) {
            if((n&(t))!=0) {
                    count++;
                    }
 
            }
    return count;
 
 
    }
long long int next(long long int num)
    {
    long long res,t;
    for(t = 1; t<=num; t*=2) {
            if((num&(t))!=0) {
                    res = num+t;
                    break;
 
                    }
 
            }
    int diff = oneCount(num)-oneCount(res);
    int i;
    for(i = 0; i<diff; i++) {
            res+=(1<<i);
 
            }
    return res;
 
 
 
    }
int main()
    {
    int T,i,N,j;
    scanf("%d",&T);
    for(i =0; i<T; i++) {
            scanf("%d",&N);
            printf("Case %d: %lld\n",i+1,next(N));
 
            }
    return 0;
 
 
 
    }
