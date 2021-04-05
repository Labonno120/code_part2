#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,mn,m1,m2;
    string s1,s2;
    cin>>n;
    cin>>s1;
    cin>>s2;
    for(i=0;i<n;i++)
    {
        m1=abs(s1[i]-s2[i]);
        if(s1[i]>=s2[i])
        m2=1+(s2[i]-0)+(9-s1[i]);
        else
        m2=1+(s1[i]-0)+(9-s2[i]);
        mn=min(m1,m2);
        //cout<<" mn="<<mn<<endl;
        sum+=mn;
        //cout<<"sum="<<sum<<endl;
    }
    cout<<sum<<endl;
}
