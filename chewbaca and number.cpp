#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll x,tm,i=0;
    vector<int>s;
    cin>>x;
    while(x)
    {
        tm=x%10;
        if(9-tm<tm)
            s.push_back(9-tm);
        else
            s.push_back(tm);
        x/=10;

    }
    if(s[s.size()-1]==0)s[s.size()-1]=9;
    for(int j=s.size()-1;j>=0;j--)
        cout<<s[j];
}

