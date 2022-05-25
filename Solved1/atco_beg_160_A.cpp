#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10];
    cin>>s;
    if(s[2]==s[3])
    {
        if(s[4]==s[5])
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else if(s[4]==s[5])
    {
        if(s[2]==s[3])
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    else
    {
        cout<<"No";
    }
    cout<<endl;
    return 0;
}
