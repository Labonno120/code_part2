#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,cnt=0,cnt1=0;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int j=n-1;j>=0;j--)
    {
        if(a[j]%2!=0)cnt++;
        else cnt1++;
    }
    cout<<min(cnt1,cnt)<<endl;

}
