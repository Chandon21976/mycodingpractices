#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int f,n,j=1,i,sum;
    while(t--)
    {
        sum = 0;
        cin>>f;
        for(i=1;i<=f;i++)
        {
            cin>>n;
            if(n>0)
            {sum = sum+n;}
        }
        cout<<"Case "<<j<<": "<<sum<<endl;
        j++;
    }
    return 0;
}
