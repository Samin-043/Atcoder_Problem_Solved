
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string str;
    cin>>str;
    int i=0;
    ll len=str.size();
    for(int j=i; j<str.size(); j++)
    {
        string sub=str.substr(j,len);
        cout<<sub<<endl;
        i++;
    }

    cout<<endl;

    return 0;
}
