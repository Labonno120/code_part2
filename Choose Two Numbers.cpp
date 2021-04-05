#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    int brr[m];
    for(int i=0;i<m;i++)
        cin>>brr[i];
    sort(arr,arr+n);
    sort(brr,brr+m);
    cout<<arr[n-1]<<" "<<brr[m-1]<<endl;
}
