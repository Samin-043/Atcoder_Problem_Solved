#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll ac=0,wa=0,tle=0,re=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="AC")
        {
            ac++;
        }
        else if(s=="WA")
        {
            wa++;
        }
        else if(s=="TLE")
        {
            tle++;
        }
        else
        {
            re++;
        }
    }
    //for(int i=0;i<4;i++)
    //{

    cout<<"AC x "<<ac<<endl;
    cout<<"WA x "<<wa<<endl;
    cout<<"TLE x "<<tle<<endl;
    cout<<"RE x "<<re<<endl;
    return 0;
}
