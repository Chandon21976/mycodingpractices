#include<iostream>
using namespace std;
int main()

{
    int a;
    bool x = true;
    cin >>a;
    for(int i=2; i<=a-1;i++)
    {
        if(a%i==0)
        {
            x = false;
            break;
        }
    }
    if(x==true)
    {
        cout<<a<<"is prime"<<endl;
    }
    else
    {
        cout<<a<<"is not prime"<<endl;
    }
    return 0;
}
