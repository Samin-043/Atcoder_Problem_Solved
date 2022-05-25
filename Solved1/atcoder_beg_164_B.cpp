#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x;
    int y;
    int flag=0,start,m,n;

    while(flag==0)
    {
        if(co%2==0)
        {
            x=c-b;
            co++;
            m=x;
            cout<<m<<endl;
        }
        else
        {
            y=a-d;
            n=y;
            co++;
            cout<<n<<endl;
        }

        if(m<=0||n<=0)
        {
            flag=1;
            //break;
        }
    }

    /*if(m<n)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }*/

    cout<<endl;
    return 0;
}
