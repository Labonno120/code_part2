#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       int N,sum=0;
       cin>>N;
       int arr[N];
       for(int i=0;i<N;i++){
            cin>>arr[i];
            if(arr[i]>=0)
            sum+=arr[i];
       }
       cout<<"Case"<<" "<<i<<":"<<" "<<sum<<endl;

    }
}
