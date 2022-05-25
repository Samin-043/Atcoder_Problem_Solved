#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,x;
    cin>>n>>k;

    if(n==0)
    {
        cout<<"0";
    }
    else if(n==k)
    {
        cout<<"0";
    }

    else
    {
        if(n%k==0)
        {
            cout<<"0";
        }
        else
        {
            x=n;
            ll d,e;
            d=n%k;
            x=min(x,d);
            d=n/k;
            d++;
            e=abs(d*k-n);
            x=min(x,e);

            cout<<x;
        }
    }
    cout<<endl;
    return 0;
}
