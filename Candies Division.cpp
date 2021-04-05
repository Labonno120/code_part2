#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%k==0)
            cout<<n<<endl;
        else
            cout<<(n/k)*k+min(n%k,k/2)<<endl;
    }
}
