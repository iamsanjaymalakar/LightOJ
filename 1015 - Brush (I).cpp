#include<stdio.h>
 
int main()
{
    int i,j,cs,students,dust,sum=0;
    scanf("%d",&cs);
    for(i=1; i<=cs; i++)
    {
        sum=0;
        //printf("\n");
        scanf("%d",&students);
        for(j=1; j<=students; j++)
        {
            scanf("%d",&dust);
            if(dust>0)
                sum+=dust;
        }
        printf("Case %d: %d\n",i,sum);
    }
}
