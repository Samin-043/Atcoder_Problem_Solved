#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,r;
    cin>>n>>r;
    if(n>=10)
    {
        cout<<r<<endl;
    }
    else
    {
        r=(100*(10-n))+r;
        cout<<r<<endl;
    }
    return 0;
}
