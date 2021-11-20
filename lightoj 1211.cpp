#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int x1,y1,z1;
    int x2,y2,z2;
    int xcom,ycom,zcom;
    int xfar = 0, yfar = 0, zfar = 0;
    int xnear = 1001, ynear = 1001, znear = 1001;
    int area;
    int i,j;
    cin>>t;
    for(i = 1; i<= t;i++)
    {
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>x1>>y1>>z1;
            cin>>x2>>y2>>z2;
            if(x1>xfar)
            {
                xfar = x1;
            }
            if(y1>yfar)
            {
                yfar = y1;
            }
            if(z1>zfar)
            {
                zfar = z1;
            }
            if(xnear>x2)
            {
                xnear = x2;
            }
            if(ynear>y2)
            {
                ynear =y2;
            }
            if(znear>z2)
            {
                znear = z2;
            }

        }
        xcom = xnear - xfar;
        ycom = ynear - yfar;
        zcom = znear - zfar;
        if(xcom>0 && ycom>0 && zcom>0)
        {
            area = xcom*ycom*zcom;
            printf("Case %d: %d\n", i, area);
        }
        else
        {
            printf("Case %d: 0\n", i);
        }
    }
    return 0;
}
