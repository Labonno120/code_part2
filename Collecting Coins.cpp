#include<iostream>
using namespace std;
int main()
{
    int a,b,t,c,n,ans,ans1,ans2,ans3,p,q,r;
    cin>>t;
    while(t--)
    {
       cin>>a>>b>>c>>n;
       p=max(a,b);
       q=max(p,c);
       ans1=q-a;
       ans2=q-b;
       ans3=q-c;
       ans=ans1+ans2+ans3;
       if(n<ans)cout<<"NO"<<endl;
       else {
        r=(n-ans)/3;
        if((r+ans1)+(r+ans2)+(r+ans3)==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

       }
       //cout<<"ans1="<<ans1<<"ans2="<<ans2<<"ans3="<<ans3<<endl;
       //cout<<"r="<<r<<endl;
    }
}
