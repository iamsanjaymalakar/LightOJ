#include<stdio.h>
 
 
int main()
{
    int i,j,cs,cow,x1,y1,x2,y2,x,y;
    scanf("%d",&cs);
    for(i=1; i<=cs; i++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&cow);
        printf("Case %d:\n",i);
        for(j=1; j<=cow; j++)
        {
            scanf("%d %d",&x,&y);
            if((x>=x1 && x<=x2) && (y>=y1 && y<=y2))
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
    return 0;
}
