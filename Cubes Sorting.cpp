#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,temp,count=0,p;
    bool tf;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=(n*(n-1))/2-1;
        int ar[n+1];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
       for(i = 0;i < n-1;i++)
       {
        tf=false;
        for(j = 0;j<n-i-1;j++)
        {
        if(ar[j]>ar[j+1])
        {
        temp=ar[j];
        ar[j]=ar[j+1];
        ar[j+1]=temp;
        count++;
        tf=true;
        }
        }
        if(tf==false)break;
      }
    if(count<=p)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    //cout<<"count="<<count<<endl;
    //cout<<"p="<<p<<endl;
        count=0;

    }
}
