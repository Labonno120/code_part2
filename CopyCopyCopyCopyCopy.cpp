#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ct=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=ar[i+1])
                ct++;
        }

        cout<<ct<<endl;
    }
}
