#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,arr[100000],count;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll l,r;
    sort(arr,arr+n);
    count=0;
    for(i=n-1;i>=1;i--)
    {
        l=0;
        r=i-1;
        while(l<r)
        {
            if(arr[l]+arr[r]>arr[i])
            {
                count+=r-l;
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
