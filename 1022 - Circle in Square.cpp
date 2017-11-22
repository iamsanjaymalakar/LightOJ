#include<stdio.h>
#include<math.h>
 
int main()
{
    double pi=2*acos(0.0),cs,r;
    int i;
    scanf("%lf",&cs);
    for(i=1; i<=cs; i++)
    {
        scanf("%lf",&r);
        printf("Case %d: %.2lf\n",i,4*r*r-pi*r*r);
    }
}
