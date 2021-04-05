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
    ll a, b , c, mn;
    cin>> a >> b >>c;
    ll tmc = c/4;
    ll tmb = b/2;
    ll tma = a/1;
    mn=min(tmc,min(tma,tmb));
    //cout<<tma<<" "<<tmb<<" "<<tmc<<endl;
    if(tmc==mn)
    {

        //cout<<(tmc*4)/4<<" "<<(tmc*4)/2<<" "<<tmc*4<<endl;
        cout<<(tmc*4)/4+(tmc*4)/2+tmc*4<<endl;
    }
    else if(mn==tmb)
    {
        //cout<<(tmb*2)/2<<" "<<tmb*2<<" "<<(tmb*2)*2<<endl;
        cout<<(tmb*2)/2+tmb*2+(tmb*2)*2<<endl;
    }
    else
    {
        //cout<<tma<<" "<<tma*2<<" "<<tma*4<<endl;
        cout<<tma+tma*2+tma*4<<endl;
    }




}



