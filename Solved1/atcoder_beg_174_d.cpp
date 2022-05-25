#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    ll c=0;
    ll len=s.size();
    //vector<char>v;
    for(ll i=0,j=n-1; i<j;)
    {
        if(s[i]=='W')
        {
            if(s[j]=='R')
            {
                swap(s[i],s[j]);
                c++;
                i++;
            }
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<c<<endl;
    return 0;
}
