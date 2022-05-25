#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    cin>>s;
    int i,flag;
    i=flag=0;
    while(s[i]!='\0')
    {
        if(s[i]=='h'&&s[i+1]=='i')
        {
            flag=1;
            i=i+2;
        }
        else
        {
            flag=0;
            break;
        }
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
