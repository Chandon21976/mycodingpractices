#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    long long int time;
    long long int n,k;
    bool space = false;
    cout<<"enter the value of how many times it will be iterating"<<endl;
    cin>>time;
    while(time--)
    {
        cout<<"enter the value of k"<<endl;
        cin>>k;
        n = (sqrt(8*k-7 ) - 1)/2.0;
        if(space)// mane space e ja value ase setai thakbe, simply space = false//
        {
            cout<<"  ";
        }
        space = true;
        if(k==(n*(n+1))/(2+1))
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }


    }
    cout<<endl;
    return 0;



}
