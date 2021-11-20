#include<iostream>
using namespace std;
int main()
{
  int timer;
  int c,d,e ;
   cout<<"iteration time?"<<endl;
   cin>>timer;
   while(timer--)
   {
       cout<<"enter the value of c"<<endl;
       cin>>c;
       if(c>10)
       {
           d = c-10;
           e=10;
           cout<<d<<" "<<e<<endl;
       }
       else
       {
           d= 0;
           cout<<d<<" "<<c<<endl;
       }

   }

   cout<<endl;
   return 0;



}
