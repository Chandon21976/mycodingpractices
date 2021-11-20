#include<iostream>
using namespace std;
int main()
{
    int range, sum1 =0 , sum2 = 0;
    cout<<"enter the range"<<endl;
    cin>>range;
    for (int i =1;i<=range;i++)
    {
        if(i%2==0)
        {
            sum1 = sum1+i;
        }
        else
        {
            sum2 = sum2+i;
        }
    }
    int sum = sum2 - sum1;
    cout<<sum<<endl;
    return 0;

}
