#include<bits/stdc++.h>
#define M 10005
#define ll long long
using namespace std;

int a, b, c, d, e, f;
ll dp[M];
ll fn(int n)
{
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(dp[n]!=-1)return (dp[n]);
    dp[n]= (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))% 10000007;

    return dp[n];
}

int main()
{
    int n, cases;
    cout<<"enter the cases variable"<<endl;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n); //n=5
        for( ll i=6;i<n+1;i++)
        {dp[i]=-1;}
        printf("Case %d: %d\n", caseno, fn(n)% 10000007);
    }
    return 0;
}
