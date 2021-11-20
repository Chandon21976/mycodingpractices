#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        int ax,ay,bx,by,cx,cy,dx,dy,a;
        cin>>ax>>ay;
        cin>>bx>>by;
        cin>>cx>>cy;
        dx = ax+cx-bx;
        dy = ay+cy-by;
        a = 0.5*(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay)) - ((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
        if(a<0)
        {
            a = a* (-1);

        }
        printf("Case %d: %d %d %d\n", i, dx, dy, a);

    }
    return 0;

}
