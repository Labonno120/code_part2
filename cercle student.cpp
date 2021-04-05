
#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
using namespace std;
int main()

{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mn=INT_MAX,mx=INT_MIN,tm,tm1,mark=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<mn)
            {
                tm=i;
                mn=a[i];
            }
            if(a[i]>mx)
            {
                tm1=i;
                mx=a[i];
            }
        }
         if(a[0]==mn&&a[n-1]==mx)
        {
            for(ll i=0;i<n-1;i++)
            {
                if(a[i]+1!=a[i+1]){
                    mark=1;
                    break;
                }
            }
        }
        else if(a[0]==mx&&a[n-1]==mn)
        {
            for(ll i=n-1;i>0;i--)
            {
                if(a[i]+1!=a[i-1])
                {
                    mark=1;
                    break;
                }
            }
        }

        else if(a[tm+1]==a[tm1])
        {
            for(ll i=tm;i>0;i--)
            {
                if(a[i]+1!=a[i-1])
                {
                    mark=1;
                    break;
                }

          }
            for(ll i=tm1;i<n-1;i++)
            {
                if(a[i]-1!=a[i+1])
                {
                    mark=1;
                    break;
                }
            }
        }
        else if(a[tm1+1]==a[tm])
        {
            for(ll i=tm1;i>0;i--)
            {
                if(a[i]-1!=a[i-1])
                {
                    mark=1;
                    break;
                }

          }
            for(ll i=tm;i<n-1;i++)
            {
                if(a[i]+1!=a[i+1])
                {
                    mark=1;
                    break;
                }
            }
        }
        else
        {
            mark=1;
        }


        if(mark)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}

