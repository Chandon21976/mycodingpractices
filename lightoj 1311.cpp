#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double vt1,vt2,vb,at1,at2,tt1,tt2,tb,bird_acceleration,trains;
    cin>>t;
    for(int i = 1;i<=t;i++)
    {
        cin>>vt1>>vt2>>vb;
        cin>>at1>>at2;
        tt1 = vt1/at1;
        tt2 = vt2/at2;
        tb = tt1;
        if(tt1<tt2)
        {
            tb = tt2;
        }
        bird_acceleration = vb * tb;
        trains = vt1*tt1 - 0.5* at1 * tt1 * tt1;
        trains = trains + (vt2*tt2 - 0.5 * at2 *tt2 *tt2);
        printf("Case %d: %.10lf %.10lf\n", i, trains, bird_acceleration);


    }

    return 0;
}
