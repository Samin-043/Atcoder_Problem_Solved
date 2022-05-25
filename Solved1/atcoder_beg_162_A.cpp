#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[5];
    cin>>s;
    int i=0;
    int flag=0;
    while(s[i]!='\0')
    {
        if(s[i]=='7')
        {
            flag=1;
        }
        i++;
    }
    if(flag==1)
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
