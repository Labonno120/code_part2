#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define out_y cout<<"YES"<<endl;
#define out_n cout<<"NO"<<endl;
#define tc(t) int t;cin>>t;while(t--)
#define pi 2*acos(0.0)
#define asort(a) sort(a,a+n)
#define all(x) (x).begin(), (x).end()
#define dsort(a) sort(a,a+n,greater<int>())
#define vasort(v) sort(v.begin(), v.end());
#define vdsort(v) sort(v.begin(), v.end(),greater<int>());
#define pb push_back
using namespace std;
int main()
{
    int n,cnt_25=0,cnt_50=0;
    bool flag=0;
    cin>>n;
    int arr[n];
    loop(i,n)
    cin>>arr[i];
    loop(i,n)
    {
        if(arr[i]==25)
            cnt_25++;
        else if(arr[i]==50)
        {
            if(cnt_25==0)
            {
              out_n;
              flag=1;
              break;
            }
            cnt_25--;
            cnt_50++;
        }
        else{

            if(cnt_50==0&&cnt_25>=3)
            {
                cnt_25-=3;
            }
            else if(cnt_50>=1&&cnt_25>=1){
                cnt_25--;
                cnt_50--;

            }
            else {
                out_n;
                flag=1;
                break;
            }

        }
    }
    if(flag==0){
        out_y;
    }
}
