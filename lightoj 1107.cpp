#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time;
    cin>>time;
    for(int i=1;i<=time;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int m,x,y;
        cin>>m;
        for(int j=1;j<=m;j++)
        {
            cin>>x>>y;
            if(x>x1 && x<x2 && y>y1 && y<y2)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
