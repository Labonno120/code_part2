#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll n;
        cin>>n;
        ll a[n],b[n],c[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>c[i];
        }
        v.push_back(a[0]);
        for(ll i=0;i<n;i++)
        {
            if(i==n-1)
            {
                if(a[i]!=a[0]&&a[i]!=a[n-2])
                    v.push_back(a[i]);
                else if(b[i]!=a[0]&&b[i]!=a[n-2])
                    v.push_back(b[i]);
                else if(c[i]!=a[0]&&c[i]!=a[n-2])v.push_back(c[i]);
            }
            else{
            if(a[i]!=a[i+1])
            {
                v.push_back(a[i+1]);
            }
            else if(a[i]!=b[i+1])
            {
                v.push_back(b[i+1]);
                a[i+1]=b[i+1];
            }
            else
            {
                v.push_back(c[i+1]);
                a[i+1]=c[i+1];
            }
            }
        }


        v.erase(v.begin()+(v.size()-2));
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
}
