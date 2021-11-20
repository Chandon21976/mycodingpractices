#include<iostream>
using namespace std;
int main()
{
    int n,k=0;
    int result = 1;
    char x;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(true)
    {
        x = getc(stdin); //mane character by character input//
        if(x=='!')
        {
            k++;
        }
        else if (x=='\n')
        {
            break;
        }
    }
    while(n>0)
    {
        result = result * n;
        n = n - k;
    }
    cout<<result<<endl;
    return 0;


}
