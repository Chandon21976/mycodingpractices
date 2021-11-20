#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a)
    {int count = count+(a&1);
    cout<<count<<endl;}
}
