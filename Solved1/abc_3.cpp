#include <bits/stdc++.h>
using namespace std;
#define ll long long
void nPermute(string str, long int n)
{
    sort(str.begin(), str.end());
    long int i = 1;
    do
    {
        if (i == n)
            break;

        i++;
    }
    while (next_permutation(str.begin(), str.end()));

    cout << str<<endl;
}

int main()
{
    string s;
    ll n;
    cin>>s>>n;
    nPermute(s, n);
    return 0;
}
