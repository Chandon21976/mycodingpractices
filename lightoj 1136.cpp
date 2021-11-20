#include<bits/stdc++.h>
using namespace std;
long long xyz(int n)
{
    int sub;

    if(n==0)
    {
        return 0;
    }
    else if(n%3==0)
    {
        sub = n/3;
        return n - sub;
    }
    else
    {
        sub = (n/3) +1;
        return n - sub;
    }

}
int main()
{
    long long T,A,B;

    cin>>T;
    for(int i =1;i<=T;i++)
    {
        cin>>A>>B;
        long long result = xyz(B)-xyz(A-1);
        printf("Case %d: %lld\n", i, result);
    }
    return 0;
}
