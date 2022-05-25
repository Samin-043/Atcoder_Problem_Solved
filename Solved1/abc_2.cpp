
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    for(int i=0;i<=80;i++)
    {
        ll value=abs(pow(2,i));
        //cout<<value<<endl;
        if(value>n)
        {
            cout<<i-1;
            break;
        }
    }
    cout<<endl;
    return 0;
}
