#include<stdio.h>
 
int main()
{
    int c,c1,c2,i;
    while(1)
    {
        scanf("%d",&c);
        if(c>0 && c<=125)
            break;
    }
    for(i=1;i<=c;i++)
    {
        scanf("%d %d",&c1,&c2);
        printf("Case %d= %d\n",i,c1+c2);
    }
    return 0;
}
