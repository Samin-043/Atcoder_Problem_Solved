#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105];
    int i,j;
    cin>>s;
    int len=strlen(s);
    int flag=0;
    for(i=0,j=((len-1)/2)-1; i<((len-1)/2),j>=0; i++,j--)
    {
        if(s[i]==s[j])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        for(i=len-1,j=((len+3)/2)-1; i>=((len+3)/2)-1,j<len; i--,j++)
        {
            if(s[i]==s[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
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
