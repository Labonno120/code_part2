#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
using namespace std;
int main()
{
    tc(t)
    {
        ll n,d=0;
        cin>>n;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {

            if(s[i]=='1')d+=90;
            else d-=90;
            if(d==-360||d==360)d=0;
        }
        if(d==0||d==360)cout<<"E"<<endl;
        else if(d==90||d==-270)cout<<"N"<<endl;
        else if(d==180||d==-180)cout<<"W"<<endl;
        else cout<<"S"<<endl;
    }
}
