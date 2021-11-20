#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    float d;
    int x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<d<<endl;
    return 0;
}
