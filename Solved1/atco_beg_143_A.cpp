#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<b)
    {
        cout<<"0";
    }
    else
    {
        b=b*2;
        if(b<a)
        {
            cout<<a-b;
        }
        else
        {
            cout<<"0";
        }
    }
    cout<<endl;
    return 0;
}
