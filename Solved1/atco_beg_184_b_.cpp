#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x;
    cin>>n>>x;
    cin.ignore();
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='x')
        {
            if(x>0)
            {
                x--;
            }
            else
            {
                x=0;
            }
        }
        else
        {
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}
