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
        string s;
        cin>>s;
        set<char>st;
        for(ll i=0;i<s.size()-1;)
        {
            if(s[i]==s[i+1])
            {
              i+=2;
            }
            else
            {
                st.insert(s[i]);
                i++;
            }
        }

        for(ll it=st.begin();it!=st.end();it++)
            cout<<*it;
        cout<<endl;
    }
}
