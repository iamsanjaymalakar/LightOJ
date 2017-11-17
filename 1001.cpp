#include<stdio.h>
int main()
{
    int a,n,i,c,p,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        c=a/2;
        p=a-c;
        printf("%d %d\n",c,p);
    }
    return 0;
}
 
