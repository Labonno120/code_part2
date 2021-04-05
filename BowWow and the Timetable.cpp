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
     ll one=0;
     string s;
     cin>>s;
     ll sz=s.size();
     for(ll i=0;i<sz;i++)
     {
         if(s[i]=='1')
            one++;
     }
     ll tm=sz-1;
     if(s=="0")cout<<0<<endl;
     else{
     if(tm%2==0)
     {
         if(one==1)
         {
             cout<<tm/2<<endl;
         }
         else
         {
             cout<<ceil((tm+1)/2.0)<<endl;
         }
     }
     else
     {
         cout<<(tm+1)/2<<endl;
     }
     }
}



