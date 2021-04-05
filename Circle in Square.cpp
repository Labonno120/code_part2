#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
#define pi 2*acos(0.0)

using namespace std;
int main()
{
        int T;
        cin>>T;
        for(int i=1;i<=T;i++){
        double r;
        cin>>r;
        cout<<"Case"<<" "<<i<<":"<<" ";

        printf("%.2lf\n",((2*r)*(2*r))-(pi*r*r));
    }
}
