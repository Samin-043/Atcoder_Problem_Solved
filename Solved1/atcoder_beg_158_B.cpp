#include<bits/stdc++.h>
using namespace std;
char s[10000000];
char x[10000000];
char y[10000000];
int main()
{
    long long int n,a,b;
    cin>>s>>x>>y;
    int i;
    i=n=0;
    while(s[i]!='\0')
    {
        n=n*10+s[i]-'0';
        i++;
    }
    i=a=0;
    while(x[i]!='\0')
    {
        a=a*10+x[i]-'0';
        i++;
    }

    i=b=0;
    while(y[i]!='\0')
    {
        b=b*10+y[i]-'0';
        i++;
    }
    int c=0;

    while(n>=0)
    {

    }

    /*while(a>=(n-(b+a)))
    {
        cout<<a+(n-(b+a));
    }*/
    cout<<a;
    cout<<endl;


    //cout<<n<<" "<<a<<" "<<b;

    return 0;
}
