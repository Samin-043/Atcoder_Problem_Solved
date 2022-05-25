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
    ll arr[10005]={0};
    ll n;
    cin>>n;
    for(int i=1;i<=105;i++)
    {
        for(int j=1;j<=105;j++)
        {
            for(int k=1;k<=105;k++)
            {
                ll ans=(i*i)+(j*j)+(k*k)+(i*j)+(i*k)+(j*k);
                if(ans<10005)
                {
                    arr[ans]+=1;
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

