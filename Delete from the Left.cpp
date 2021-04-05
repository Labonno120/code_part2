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
    string s1,s2;
    ll c1=0,c2=0,mnsize;
    cin>>s1;
    cin>>s2;
    mnsize=min(s1.size(),s2.size());
    if(mnsize==s1.size())
    {
        for(ll i=s1.size()-1,j=s2.size()-1;i>=0;i--,j--)
        {
            if(s1[i]==s2[j])
                c1++;
            else break;
        }
        cout<<(s1.size()+s2.size())-2*c1<<endl;
    }
    else{
        for(ll i=s2.size()-1,j=s1.size()-1;i>=0;i--,j--)
        {
            if(s2[i]==s1[j])
                c2++;
            else break;
        }
        cout<<(s1.size()+s2.size())-2*c2<<endl;
    }

}

