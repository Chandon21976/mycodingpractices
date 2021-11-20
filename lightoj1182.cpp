
#include<bits/stdc++.h>
#include<bitset>
using namespace std;
int counter(int n)
{
    int count =0;
    while(n)
    {
        if(n>0) //if values are positive
        {count+=(n&1);
        n>>=1;
        }
        else //if the values are entirely negative integers
        {
            n= n & (n-1);
            count++;
        }

    }
   return count;

}
int main()
{
    int t;
    cin>>t;
    int x;
    for(int i =1;i<=t;i++)
    {
        cin>>x;
        int y = counter(x);
        if(y%2==0)
        {
            cout<<"Case "<<i<<": even"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": odd"<<endl;
        }


    }

    return 0;

}
