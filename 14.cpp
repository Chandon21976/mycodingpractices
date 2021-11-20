
#include<iostream>
using namespace std;
int main()
{
    int range, sum1 = 0, sum2 = 0;
    cout<<"enter the range of the series"<<endl;
    cin>>range;
    int i = 1;

    while( i<=range)
    {
        if(i%3==0)
        {
            sum1 = sum1+ i*(i+1);
            cout<<sum1<<endl;
            i = i+2;


        }
        else
        {
            sum2 = sum2+i;
            cout<<sum2<<endl;
            i++;
        }

    }
    cout<<sum1+sum2<<endl;
}
