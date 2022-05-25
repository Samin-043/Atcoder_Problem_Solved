#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x=0;
    int y=0;
    int z=0;
    int w=0;
    for(int i=0;i<4;i++)
    {
        string str;
        cin>>str;
        if(str=="H")
        {
            x=1;
        }
        else if(str=="2B")
        {
            y=1;
        }
        else if(str=="3B")
        {
            z=1;
        }
        else if(str=="HR")
        {
            w=1;
        }
    }

    if(x==1&&y==1&&z==1&&w==1)
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
