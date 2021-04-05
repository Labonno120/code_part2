#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,tm,tn;
    cin>>a>>b>>c>>d;
    tm=max((3*a)/10,a-(a/250*c));
    tn=max((3*b)/10,b-(b/250*d));
    if(tm>tn)
       cout<<"Misha"<<endl;
    else if(tm<tn)
       cout<<"Vasya" <<endl;
    else
        cout<<"Tie"<<endl;
}
