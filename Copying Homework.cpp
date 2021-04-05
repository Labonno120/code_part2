#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    for(ll i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
