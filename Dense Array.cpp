#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    tc(t)
    {
        ll n,c=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n-1;i++)
        {
            ll tm1=max(a[i],a[i+1]);
            ll tm2=min(a[i+1],a[i]);
            while(tm1>tm2*2)
            {
                tm2*=2;
                c++;
            }
        }
        cout<<c<<endl;

    }
}

