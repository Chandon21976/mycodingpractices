#include<bits/stdc++.h>
#include<math.h>
#define pie 2.0*acos(0.0)
using namespace std;
int main()
{
    double r3,volume;
    int t,r1,r2,p,h;
    cin>>t;
    for(int i = 1; i<=t;i++)
    {
        cin>>r1>>r2>>p>>h;
        r3 = p/(h * 1.0) * (r1 - r2)  + r2;
        volume = (pie/3)*p*(r3*r3+r2*r2+(r3*r2));
         printf("Case %d: %.10lf\n", i,volume);
    }
    return 0;
}
