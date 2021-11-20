/*#include<iostream>
#include<cstring>
//memset bosanor way hochche
using namespace std;
int main()
{
    bool p[100];
    memset(p,true,sizeof(p));
    cout<<p[10]<<endl;
    cout<<p[20]<<endl;
    p[0]=p[1]=false;
    cout<<p[0]<<endl<<p[1]<<endl;
    return 0;
}
*/

#include <cstdio>
#include <cstring>

using namespace std;

#define MAX_N 164000

bool isPrime[MAX_N];
int ans[15000],sz;

int main(){
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;

    ans[0] = 2; sz = 1;

    for(int i = 3;i<MAX_N && sz<15000;i += 2){
        if(isPrime[i]){
            ans[sz] = i; ++sz;
            if(i<MAX_N/i)
                for(int j = i*i;j<MAX_N;j += i)
                    isPrime[j] = false;
        }
    }

    int T,ind;
    scanf("%d",&T);

    while(T--){
        scanf("%d",&ind);
        printf("%d\n",ans[ind-1]);
    }

    return 0;
}
