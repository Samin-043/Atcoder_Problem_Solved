#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        v2.push_back(y);
    }
    for(int i=0;i<n;i++)
    {
        sum+=v1[i]*v2[i];
    }
    if(sum==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    cout<<endl;
}
