#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll start_h,start_m,end_h,end_m,k;
    cin>>start_h>>start_m>>end_h>>end_m>>k;
    ll x;
    if(start_h==end_h)
    {
        x=end_m-start_m;
    }
    else
    {
        x=(60-start_m);
        for(int i=(start_h+1); i<end_h; i++)
        {
            x+=60;
        }
        x+=end_m;
    }
    cout<<abs(x-k)<<endl;
    return 0;
}
