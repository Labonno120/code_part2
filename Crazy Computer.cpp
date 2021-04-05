#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,c,cnt=1;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]<=c)
            cnt++;
        else
            cnt=1;
          //  cout<<"cnt="<<cnt<<endl;
    }
    cout<<cnt<<endl;
}
