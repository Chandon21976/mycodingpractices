#include<iostream>
using namespace std;
int main()
{
    int n,r;
    int fact1=1;
    int fact2=1;
    int fact3=1;
    cin>>n>>r;
    int x = n-r;
    for(int i = n; i>0;i--)
    {
        fact1 =fact1*i;
    }
    for(int j = r; j>0;j--)
    {
        fact2=fact2*j;
    }
    for(int k = x;k>0;k--)
    {
        fact3=fact3*k;
    }
    double y = fact1/(fact2*fact3);
    cout<<y<<endl;
    return 0;
}
