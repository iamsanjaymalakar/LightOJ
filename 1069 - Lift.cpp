#include<stdio.h>
#include<math.h>
 
int main()
{
    int i,cs,l,s,r;
    scanf("%d",&cs);
    for(i=1; i<=cs; i++)
    {
        scanf("%d %d",&s,&l);
        r=abs(l-s)*4+19+s*4;
        printf("Case %d: %d\n",i,r);
    }
    return 0;
}
