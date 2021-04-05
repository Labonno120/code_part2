#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    tc(t)
    {
        ll n,p,q,r,u,s;
        set<ll>st;
        cin>>n;
        ll a[n];
        loop(i,n)
        {
            cin>>a[i];
        }
        loop(i,n)
        {
            for(ll j=i+1;j<n;j++)
            {
              st.insert(abs(a[i]-a[j]));

            }
        }
        cout<<st.size()<<endl;
    }
}
