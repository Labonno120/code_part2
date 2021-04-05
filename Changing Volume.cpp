#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,mx,mn,tm,ans=0;
        cin>>a>>b;
        mx=max(a,b);
        mn=min(a,b);
        tm=mx-mn;
        ans+=tm/5;
        tm=tm%5;
        ans+=(tm/2);
        ans+=(tm%2);
        cout<<ans<<endl;




    }
}


