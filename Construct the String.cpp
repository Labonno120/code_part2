#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n,a,b,i,j,k,t,q,p,l;
    string str1="abcdefghijklmnopqrstuvwxyz";

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>a>>b;

         if(b==1){
                for(j=0;j<n;j++)cout<<"a";
                cout<<endl;}
        else
        {

             for(j=0;j<n/b;j++)
             for(k=0;k<b;k++)cout<<str1[k];
             for(l=0;l<n%b;l++)cout<<str1[l];
             cout<<endl;


        }


    }
}
