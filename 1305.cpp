#include<iostream>
 
using namespace std;
 
 
int main()
{
    int cs;
    cin >> cs;
    int o=1;
    while(cs)
    {
        int ax,ay,bx,by,cx,cy,dx,dy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        dx=ax+cx-bx;
        dy=ay+cy-by;
        int ans = (ax*by+bx*cy+cx*dy+dx*ay-ay*bx-by*cx-cy*dx-dy*ax);
        if(ans<0)
            ans*=-1;
        ans/=2;
        cout << "Case " << o << ": " << dx <<" " << dy << " "  << ans << endl;
        cs--;
        o++;
    }
}
