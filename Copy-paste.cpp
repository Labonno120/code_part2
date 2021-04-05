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
        ll n,k,mark=0,sum=0;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>k)mark=1;
        }
        sort(a,a+n);
        if(mark==1)cout<<0<<endl;
        else{


                for(ll i=1;i<n;i++)
                {
                    ll j=(k-a[i])/a[0];
                    sum+=j;
                }
                cout<<sum<<endl;
        }


    }
}
