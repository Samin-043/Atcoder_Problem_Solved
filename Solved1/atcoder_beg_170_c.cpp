#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,arr[105];
    cin>>x>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int ans=0,flag=0;
    int k=0,a=0,b=0;
    while(flag==0)
    {
        a=x+k;
        b=x-k;
        int d=0,e=0;
        for(int i=0;i<n;i++)
        {
            if(a==b)
            {
                if(arr[i]==a)
                {
                    d=1;
                    e=1;
                }
            }
            else if(arr[i]==a)
            {
                d=1;
            }
            else if(arr[i]==b)
            {
                e=1;
            }
        }
        if(d==0&&e==0)
        {
            ans=min(a,b);
            flag=1;
        }
        else if(d==0)
        {
            ans=a;
            flag=1;
        }
        else if(e==0)
        {
            ans=b;
            flag=1;
        }
        k++;
    }
    cout<<ans<<endl;
    return 0;
}
