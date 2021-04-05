#include<iostream>
#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main()
{
    int n,m,cnt=0,cnt1=0,sum=0;
    bool flag=0;
    cin>>n>>m;
    char arr[n+1][m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
                if(arr[i][j]=='S')
                    flag=1;
        }
        if(flag==1)
        {
            flag=0;
            cnt++;
        }
    }
    sum+=(n-cnt)*m;
    for(int j=0;j<m;j++)
    {
    for(int i=0;i<n;i++)
        {
                if(arr[i][j]=='S')
                    flag=1;
        }
        if(flag==1)
        {
            flag=0;
            cnt1++;
        }
    }
    sum+=(m-cnt1)*(n-(n-cnt));
   // cout<<"cnt="<<cnt<<" "<<cnt1<<endl;
    cout<<sum<<endl;


}
