#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    int count = 0;
    for(int k = 1;k<=t;k++)
    {
        cin>>i>>j;
        for(int l = i;l<=j;l++)
        {

           if (l % 2 ==0)
           {
               l = l/2;

           }
           else
           {
               l = (3*l)+1;
           }
           count++;

        }

        if(count>0)
        {
            cout<<i<<" "<<j<<" "<<count<<endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}
