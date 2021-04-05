#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,m[15],sum=0,count=0,j,sum1=0,sm=0,n;
    cin>>k;
    for(i=0;i<12;i++){
        cin>>m[i];
        sm+=m[i];
    }
    sort(m,m+12);

    if(sm<k)cout<<"-1"<<endl;
    else if(k==0)cout<<"0"<<endl;

    else {
    for(i=11;i>=0;i--){
        sum+=m[i];
        count++;
        if(sum>=k){
            cout<<count<<endl;
            break;
        }
    }
    }

}
