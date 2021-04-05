#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    int n;
    cin>>n;
    if(n&1)
    {
        cout<<"7";
        for(int i=0;i<(n-3)/2;i++)
            cout<<"1";
    }
    else
    {
        for(int i=0;i<n/2;i++)
            cout<<"1";
    }
    cout<<endl;
    }
}
