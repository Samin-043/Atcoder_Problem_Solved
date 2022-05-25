#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[200005];
int main()
{
    //vector<ll>v;
    ll n;
    cin>>n;
    ll count=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
            count++;
    }
    ll c,index;
    for(ll i=1;i<=n;i++)
    {
        c=0;
        for(ll j=0;j<n-1;j++)
        {
            if(i==arr[j])
            {
                c++;
            }
        }
        count=count-c;
        if(count<0)
        {
            index=i;
            break;
        }
        //v.push_back(c);
        cout<<c<<endl;
    }
    if(index<n)
    {
        for(int i=index;i<n;i++)
        {
            cout<<"0"<<endl;
        }
    }
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }*/
    return 0;
}
