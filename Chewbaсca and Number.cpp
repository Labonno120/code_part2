#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll x,tm,i=0;
    string s;
    cin>>x;
    while(x)
    {
        tm=x%10;
        if(9-tm<tm)
            s[i]=9-tm;
        else
            s[i]=tm;
        x/=10;
        i++;
    }
    //string ans=reverse(s);
    cout<<s<<endl;
}
