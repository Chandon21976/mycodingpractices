#include<bits/stdc++.h>
using namespace std;

double area (double r, double angle)// ekhane angle holo angle function//
{
    return 0.5*r*r*angle;
}
double angle (double opp_a, double opp_b, double opp_c)
{

    return acos(((opp_b*opp_b)+(opp_c*opp_c)-(opp_a*opp_a))/(2*opp_b*opp_c));
}

int main()
{
    int t;
    cin>>t;
    double a,b,c,total_area;
    for(int i = 1; i<=t;i++)
    {

       cin>>a>>b>>c;
       double s = (a+a+b+b+c+c)/2.0;
       double total = sqrt (s*(s-a-b)*(s-b-c)*(s-c-a));
       total = total - area(a, angle(b+c,c+a,a+b));
       total = total - area(b, angle(c+a,a+b,b+c));
       total = total - area(c, angle(a+b,b+c,c+a));
       cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<total<<endl;


    }
    return 0;
}
