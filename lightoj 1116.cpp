#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long w,n,m; //n is odd and m is even//
    cin>>t;
    for(int i = 1; i<=t;i++)
    {
        cin>>w;
        if(w%2==0)
        {
            n=w/2;
            m=2;
            while(n%2==0)
            {
                n=n/2;
                m=m*2;
            }
            printf("Case %d: %ld %ld\n", i, n, m);
        }
        else
        {
             printf("Case %d: Impossible\n", i);
        }
    }
    return 0;
}

