#include<iostream>
#include<bitset>
using namespace std;
void counter(int n)
{
    int count =0;
    while(n)
    {
     if(n>0)
    {
        count += (n&1);
        n>>=1;


    }
     else
     {
       n = n & (n - 1);
        count++;

     }
}

cout<<count<<endl;

}
int main()
{
    int n;
    cin>>n;
    cout<< bitset<64>(n)<<endl;
    counter(n);


    return 0;
}
