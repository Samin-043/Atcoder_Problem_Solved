#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if((sqrt(a)+sqrt(b))<sqrt(c))
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
