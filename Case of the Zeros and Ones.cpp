#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,count_0=0,count_1=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')count_0++;
        else count_1++;
    }
    cout<<abs(count_0-count_1)<<endl;
}
