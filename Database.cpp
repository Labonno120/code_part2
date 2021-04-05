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
    ll t; cin>>t;
    for(ll j=1;j<=t;j++)
    {
         ll n,m,mark=0;
         map<pair<string, string>,int>mp;
         cin>>n>>m;
         for(ll i=0;i<m;i++)
         {
             string a,b;
             cin>>a>>b;
             mp[{a,b}]++;
             if(mp[{a,b}]>1)mark=1;

         }
         if(mark)cout<<"Scenario #"<<j<<": impossible"<<endl;
         else cout<<"Scenario #"<<j<<": possible"<<endl;

    }
}

