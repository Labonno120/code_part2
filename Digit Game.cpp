#include<bits/stdc++.h>
#define ll  long long
#define pi acos(-1.0)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a=1,n;
        cin>>n;
        string s;
        cin>>s;
        for(ll i=0;i<n-1;i++)
        {
            if(a==1)
            {
                if((s[i]-'0')%2==1)
                {
                    s[n-1]=s[i];
                }
                a=2;
            }
            if(a==2)
            {
                if((s[i]-'0')%2==0)
                    s[n-1]=s[i];
                a=1;
            }
        }
        if((s[n-1]-'0')%2==0)cout<<2<<endl;
        else cout<<1<<endl;

    }
}
