#include<bits/stdc++.h>
using namespace std;
long long int arr[1000000],brr[1000000];
int main()
{
    long long int a,b,m,i,sum;
    cin>>a>>b>>m;
    long long int x,y,d,e;
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<b;i++)
    {
        cin>>brr[i];
    }
    x=arr[0];
    y=brr[0];
    for(i=0;i<a;i++)
    {
        d=min(x,arr[i]);
    }
    for(i=0;i<b;i++)
    {
        e=min(y,brr[i]);
    }
    sum=d+e;
    long long int sm,z,h,p,q,r;
    for(i=0;i<m;i++)
    {
        cin>>p>>q>>r;
        p--;
        q--;
        sum=min(sum,((arr[p]+brr[q])-r));
    }
    //sort(mrr,mrr+h);

    cout<<sum;
    cout<<endl;
    return 0;
}
