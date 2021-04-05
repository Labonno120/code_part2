#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,d,sum=0;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if((n-1)*10+sum>d)
        cout<<"-1"<<endl;
    else{
       cout<<(d-sum)/5<<endl;
    }
}
