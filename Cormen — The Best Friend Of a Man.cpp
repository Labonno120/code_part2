#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,cnt=0,j,tm;
    cin>>n>>k;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n-1;j++)
    {
        if(a[j]+a[j+1]<k)
        {
            tm=a[j+1];
            a[j+1]=k-a[j];
            cnt+=(a[j+1]-tm);
        }
    }
    cout<<cnt<<endl;
    for(j=0;j<n;j++)
        cout<<a[j]<<" ";
}
