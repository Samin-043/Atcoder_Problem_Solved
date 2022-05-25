#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,arr[105][105];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int flag,c;
    flag=c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j]=='#'&&c==0)
            {
                flag=1;
            }
            else if(flag==1)
            {
                if(s[i][j]=='.')
                {
                    c++;
                }
            }
            else if(i<2&&s[i][j]=='#')
            {
                flag=1;
            }
            //cin>>arr[i][j];
        }
    }
    return 0;
}
