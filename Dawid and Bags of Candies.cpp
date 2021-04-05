#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b==c+d)
            cout<<"Yes"<<endl;
        else if(a+c==b+d)
            cout<<"Yes"<<endl;
        else if(a+d==c+b)
            cout<<"Yes"<<endl;
        else if(a+b+c==d)
            cout<<"Yes"<<endl;
        else if(a+d+c==b)
            cout<<"Yes"<<endl;
        else if(a+d+b==c)
            cout<<"Yes"<<endl;
        else if(b+c+d==a)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
}
