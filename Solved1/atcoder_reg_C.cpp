#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[105];
    cin>>n;
    long long  int s;
    s=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }

    //double avg1,avg2,r1,r2,t;
    long long int avg1,avg2,r1,r2,t;
    avg1=s/n;
    avg2=(s+n-1)/n;
    r1=r2=0;
    for(int i=0;i<n;i++)
    {
        r1+=((arr[i]-avg1)*(arr[i]-avg1));
        r2+=((arr[i]-avg2)*(arr[i]-avg2));
    }

    t=min(r1,r2);
    //cout<<r1<<" "<<r2;
    cout<<t<<endl;

    return 0;
}
