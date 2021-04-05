#include<iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<ll,ll>mp;
    ll n,mx=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        mx=max(mx,mp[a[i]]);
    }
    cout<<mx<<endl;


}


