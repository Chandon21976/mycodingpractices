#include<iostream>
using namespace std;
int main()
{
    int i=1,n, range, sum = 0;
    cin>>range;
    n=range;
    for(i =1;i<=range;i++)
    {
        sum = sum + (i*n);

        n--;

    }
    cout<<sum<<endl;
    return 0;

}
