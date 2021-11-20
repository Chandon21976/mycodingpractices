#include<iostream>
using namespace std;
int main()
{
    int r, sum = 0;
    cout<<"enter the range"<<endl;
    cin>>r;
    for(int i = 0;i<=r;i++)
    {
        sum = sum + (i*i);
    }
    cout<<sum<<endl;
    return 0;
}
