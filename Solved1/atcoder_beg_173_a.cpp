#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll money=1000;
    while(1)
    {
        if(money>=n)
        {
            cout<<(money-n)<<endl;
            break;
        }
        else
        {
            money+=1000;
        }
    }
    return 0;
}
