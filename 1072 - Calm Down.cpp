#include<stdio.h>
#include<math.h>
 
#define pi 2*acos(0.0)
 
int main()
{
    int cs,i,n;
    double R,r,a,m;
    scanf("%d",&cs);
    for(i=1; i<=cs; i++)
    {
        scanf("%lf %d",&R,&n);
        a=((2.0*pi)/n)/2.0;
        m=sin(a);
        r=(m*R)/(m+1);
        printf("Case %d: %lf\n",i,r);
    }
    return 0;
}
 
