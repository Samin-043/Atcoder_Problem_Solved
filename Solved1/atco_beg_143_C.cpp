#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    char c;
    ll i,n,len;
    cin>>n;
    char s[n];
    cin>>s;
    i=len=0;
    while(s[i]!='\0')
    {
        c=s[i];
        if(s[i]==c&&s[i+1]==c)
        {
            while(s[i]==c)
            {
                i++;
            }
        }
        else
        {
            i++;
        }
        len++;
    }
    cout<<len<<endl;
    return 0;
}
