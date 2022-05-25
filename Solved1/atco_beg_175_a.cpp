#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin>>s;
    int i=0;
    int c=0;
    int m=0;
    while(i<s.size())
    {
        if(s[i]=='R')
        {
            c++;
            m=max(m,c);
        }
        else if(s[i]=='S')
        {
            c=0;
            //m=max(m,c);
        }
        i++;
    }
    cout<<m<<endl;
    return 0;
}
