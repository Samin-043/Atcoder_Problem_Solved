#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int i,n,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    ll sum;
    sum=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum+=arr[i]*arr[j];
        }
    }
    cout<<sum<<endl;

    return 0;
}
