#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,arr[1006];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x=0,c,max_c=0,flag=0;
    for(int i=2;i<=1000;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            {
                c++;
            }
        }
        if(c>max_c)
        {
            max_c=c;
            x=i;
            flag=1;
        }
    }

    if(flag==1)
    {
        cout<<x<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
