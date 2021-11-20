#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"1st"<<endl;

    }
    else if(x<0 && y>0)
    {
        cout<<"2nd"<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<<"3rd"<<endl;
    }
    else
    {
        cout<<"4th"<<endl;

    }
    return 0;
}
