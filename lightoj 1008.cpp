#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int root,lack,second,times;
    long long int row,column,i=1;
    //cout<<"test cases"<<endl;
    cin>>times;
    while(times--)
    {
        //cout<<"enter the second values"<<endl;
        cin>>second;
        root = ceil(sqrt(second)); //ceiling value er root kore nilam//
        lack = root*root - second;
        if(lack<root)
        {
            row = root;
            column = lack + 1;
        }
        else
        {
            column = root;
            row = second - (root-1)*(root-1);
        }
        if (root%2==0)
        {
            swap(row,column);
        }
        cout<<"Case "<<i<<": "<<column<<" "<<row<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}
