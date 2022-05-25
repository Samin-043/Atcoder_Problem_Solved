#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Binary_Search(ll first,ll last,vector<ll>v,ll search_value)
{
    int pos=-1;
    while(first<=last)
    {
        ll mid=first+((last-first)/2);
        if(v[mid]==search_value)
        {
            pos=mid;
            break;
        }
        else if(search_value>v[mid])
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    return pos;
}
ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int n;
    cin>>n;
    int arr[105];
    int c=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(i%2==1)
        {
            if(arr[i]%2==1)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
