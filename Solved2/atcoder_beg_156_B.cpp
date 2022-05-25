#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int n,k;
    int ans;
    cin>>n>>k;
    ans=(int)(floor(log(n)/log(k))+1);
    /*ans=0;
    while(n>0)
    {
        n=n/k;
        ans++;
    }*/
    cout<<ans<<endl;
    return 0;
}
