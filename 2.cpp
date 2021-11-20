#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float A,B,C;
    cin>>a>>b>>c;
    float A1 = (b*b+c*c-a*a)/(2*b*c);
    A = acos(A1);
    float B1 = (a*a+c*c-b*b)/(2*a*c);
    B = acos(B1);
    float C1 = (a*a+b*b-c*c)/(2*a*b);
    C = acos(C1);
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;

}
