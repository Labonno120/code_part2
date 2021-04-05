#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,c0,c1,h,sum=0;
    string str;
    cin>>n>>c0>>c1>>h;

    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            if(c0<=c1)
                sum+=c0;
            else if(c0<=c1+h)
                sum+=c0;
            else
                sum+=c1+h;
           //cout<<"sum1="<<sum<<endl;
        }
        else
        {
            if(c1<=c0)
                sum+=c1;
            else if(c1<=c0+h)
                sum+=c1;
            else
                sum+=c0+h;
            //cout<<"sum2="<<sum<<endl;
        }


    }
    cout<<sum<<endl;
    }
}
