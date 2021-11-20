#include<cstring>
#include<iostream>
 // for memset function//
using namespace std;
int main()
{
    long long maximum = 16400;
    bool prime[maximum];
    int answer[15000];
    int sz,i,j;
    memset(prime,true,sizeof(prime)); //all index e true bosiye nilam//

    //cout<<prime[0]<<endl;
    prime[0]=prime[1]=false;
    //cout<<prime[0]<<endl<<prime[1]<<endl;
    answer[0]=2;
    sz = 1;
    for(i = 3; i<maximum && sz<15000;i+=2)
    {
        if(prime[i]==true)
        {
            answer[sz]= i;
            ++sz;
            if(i<maximum/i)
            {
                for(j=i*i;j<maximum;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
    }
    int time,index;
    cin>>time;
    while(time--)
    {
        cin>>index;
        cout<<answer[index-1]<<endl;
    }
    return 0;


}
