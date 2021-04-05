#include<iostream>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,k=0,len;
    string s1,s2;
    cin>> t;
    for(i=0;i<t;i++)
    {
        cin>> n;
        cin>>s1;
        cin>>s2;
       vector<int>pos;
        for(j=0;j<n;j++)
        {
            if(s1[j]!=s2[j])
            {
                pos.push_back(j);

            }
        }
        len=pos.size();

        if(len==2&&s1[pos[0]]==s1[pos[1]]&&s2[pos[0]]==s2[pos[1]])
            cout<<"Yes"<<endl;
        else
            cout<< "No"<<endl;


    }
}
