#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        int q;
        int p;


        cin>>s;
        if(s<10)q=1;
        else if(s<100)q=3;
        else if(s<1000)q=6;
        else q=10;


        cout<<((s%10)*10)-(10-q)<<endl;

    }
}
