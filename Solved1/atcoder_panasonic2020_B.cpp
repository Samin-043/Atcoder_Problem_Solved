#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int h,w,ans;
    cin>>h>>w;
    ans=h*w;
    if(h==1||w==1)
    {
        cout<<1;
    }
    else if(ans%2==0)
    {
        cout<<ans/2;
    }
    else
    {
        cout<<(ans/2)+1;
    }
    cout<<endl;
    return 0;
}
