#include<stdio.h>
 
int main()
{
    int cs,i,a,b,c;
    scanf("%d",&cs);
    for(i=1; i<=cs; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a*a==b*b+c*c) || (a*a+b*b==c*c) || (b*b==c*c+a*a))
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
 
