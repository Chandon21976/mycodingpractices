#include<bits/stdc++.h>
#include<math.h>
using namespace  std;
#define pi 2.0*acos(0.0)
int main()
{
    double r,s;
    int t,j=1;

    cin>>t;
    while(t--)
    {
        s = 0;
        cin>>r;
        s = (4*r*r)- (pi*r*r);
        printf("Case %d: %.2lf\n",j,s);
        j++;

    }
    return 0;
}
