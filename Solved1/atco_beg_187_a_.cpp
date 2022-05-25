#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int find_sum(string s)
{
    ll sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=s[i]-'0';
    }
    return sum;
}
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    //cin.ignore();
    //getline(cin,s2);
    ll sum1=find_sum(s1);
    ll sum2=find_sum(s2);
    if(sum1>sum2)
    {
        cout<<sum1;
    }
    else if(sum1<sum2)
    {
        cout<<sum2;
    }
    else
    {
        cout<<sum1;
    }
    cout<<endl;
    return 0;
}
