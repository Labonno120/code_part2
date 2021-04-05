#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k;
    cin>> t;
    for(k=0;k<t;k++)
    {
      cin>>n;
      for(i=2;i<10e9;i++)
     {
         j=pow(2,i)-1;
        if(n%j==0)
          {
              cout<<n/j<<endl;
              break;
          }


      }
    }
}
