#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[10000000];
int main()
{
    ll i,k,n;
    cin>>k>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll ans1=100000;
    ll ans;
    ll j,z;
    for(i=0;i<n;i++)
    {
        ans=0;
        ans+=arr[i+1]-arr[i];
        for(j=i+1;j<n;j++)
        {
            ans+=arr[j+1]-arr[j];
            /*if(arr[i]>arr[j])
            {
                ans+=arr[i]-arr[j];
            }
            else
            {
                ans+=arr[j]-arr[i];
            }*/

        }
        //ans1=min(ans,ans1);
    }
    cout<<ans<<endl;
    //cout<<ans1<<endl;

    return 0;
}
