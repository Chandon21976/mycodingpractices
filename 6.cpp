#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    float area = 0.5*((x1*y2-y3*x1)+(x2*y1-x3*y1)+(x2*y3-x3*y2));
    cout<<area<<endl;
    return 0;

}
