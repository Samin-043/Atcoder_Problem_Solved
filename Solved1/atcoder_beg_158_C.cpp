#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,m,n,flag;
    cin>>a>>b;
    flag=0;
    for(int i=1;i<=10001;i++)
    {
        m=i*0.08;
        n=i*0.1;
        if(m==a&&n==b)
        {
            cout<<i;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"-1";
    }
    cout<<endl;
    return 0;
}
