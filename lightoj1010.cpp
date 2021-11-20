#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    int i =1;
    while(t--)
    {
        cin>>m>>n;
        if(m==1 || n==1)
        {
            cout<<"Case "<<i<<": "<<max(m,n)<<endl;
        }
        else if (m==2 || n == 2)
        {
            if((((m*n)/8)/4)+((m*n)%8)>=4)
            {
                cout<<"Case "<<i<<": "<<(m*n)%8<<endl;
            }
            else
                {
                    cout<<"Case "<<i<<": "<<(m*n)%8<<endl;
                }
        }
        else
        {
            cout<<"Case "<<i<<": "<<(m*n+1)/2<<endl;
        }


        i++;
    }
    return 0;
}
