#include<iostream>
using namespace std;
int main()
{
    int t,i,j,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1];
        int b[m+1];
        bool flag=0;
        for(i=0;i<n;i++)cin>>a[i];
        for(j=0;j<m;j++)cin>>b[j];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]==b[j]&&flag==0)
                {
                    cout<<"YES"<<endl;
                    cout<<"1"<<" "<<a[i]<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)cout<<"NO"<<endl;
    }
}

