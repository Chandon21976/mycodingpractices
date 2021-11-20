#include<iostream>
#include<cmath>
using namespace std;
int factorial (int a)
{
    if(a>1)
    {
        return a*factorial(a-1);
    }
    else
    {
        return 1;
    }
}


int main()
{
    int x,n;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    cout<<"enter how long will it run"<<endl;
    cin>>n;
    double sum = 0.0000;
    for(int i =2;i<=n;i=i+2)
    {
        if(i==2)
        {sum = sum - (pow(x,i)/factorial(i));}
        sum = sum + (pow(x,i)/factorial(i));
        cout<<sum<<endl;
    }
    double y = 1 - sum;
    cout<<y<<endl;
    return 0;

}
