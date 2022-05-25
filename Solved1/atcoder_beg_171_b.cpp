#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,k,arr[1005];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
