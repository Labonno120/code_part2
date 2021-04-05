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

        ll n,j=0;
        string s,s1,s2;

        cin>>n;
        cin>>s;
        s2=s;

        for(ll i=n-2;i>=0;i-=2)
        {
           cout<<s[i];

            //cout<<"*"<<s<<endl;

            s2.erase ( s2.begin()+(i) );
        }

        cout<<s2<<endl;



    }


