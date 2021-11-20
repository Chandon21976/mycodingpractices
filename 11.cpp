#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int r,sum = 0;
    cout<<"enter the range";
    cin>>r;
    for(int i = 1; i<=r;i++)
    {
        sum = sum + pow(i,i);

    }
    cout<<sum<<endl;
    return 0;


}
