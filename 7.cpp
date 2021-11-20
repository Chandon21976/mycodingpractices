#include<iostream>
using namespace std;
int main()
{
    int range, number = 1, c = 0,latest = 0;
cout<<"enter the value of range number"<<endl;
cin>>range;
while(c!=range)
{
    int num1 = number;
    int num2 = 0;
    while (num1!=0)
    {
        int reminder = num1%10;
        num1 = num1/10;
        num2 = num2*10 + reminder;
    }
    if(number == num2)
    {
        c++;
        latest = number;

    }
    number = number+1;
}
cout<<"value is "<<latest;
return 0;
}
