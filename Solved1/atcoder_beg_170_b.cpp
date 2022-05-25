#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int m=x*2;
    int n=x*4;
    if(y>0&&y%2==0)
    {
        if(y>=m&&y<=n)
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
