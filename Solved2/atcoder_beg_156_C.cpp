#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[105];
    double s,sum1,sum2;
    cin>>n;
    s=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }

    sum1=floor(s/n);
    sum2=ceil(s/n);
    //cout<<sum1<<" "<<sum2;
    double r1,r2,t;
    //cout<<sum;
    r1=r2=0;
    for(int i=0;i<n;i++)
    {
        r1+=((arr[i]-sum1)*(arr[i]-sum1));
        r2+=((arr[i]-sum2)*(arr[i]-sum2));
    }
    //cout<<r1<<" "<<r2<<endl;
    t=min(r1,r2);
    cout<<t<<endl;
    return 0;

}
