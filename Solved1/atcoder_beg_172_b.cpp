#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    //cin.ignore();
    getline(cin,s2);
    int c=0;
    //cout<<s1<<" "<<s2<<endl;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])
        {
            continue;
        }
        else
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
