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
        int a[5],even=0,odd=0,even1=0,odd1=0,cnt0=0;
        bool flag=0;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)odd++;
            else even++;
        }

        if(odd==2)
        {
            cout<<"No"<<endl;
        }
        else if(odd==3&&(a[0]==0||a[1]==0||a[2]==0))
        {
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl;
    }
}
