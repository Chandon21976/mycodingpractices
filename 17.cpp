#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<"x";
        }
        cout<<endl;
    }
    return 0;
}
