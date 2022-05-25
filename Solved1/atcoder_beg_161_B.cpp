#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i,arr[1005];
    double ans;
    ans=1*1.0/(4*m);
    //cout<<"ans "<<ans<<endl;
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int c=0;
    int flag=0;
    for(i=0;i<n;i++)
    {
        double value;
        value=arr[i]*1.0/sum;
        //cout<<value<<endl;
        if(value>=ans)
        {
            c++;
        }
        if(c==m)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    cout<<endl;
    return 0;
}
