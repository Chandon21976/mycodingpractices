#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    float s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<area<<endl;
    return 0;

}
