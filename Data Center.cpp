    #include<iostream>
    #include<bits/stdc++.h>
    #define ll long long int
    #define pi 2*acos(0.0)
    //#define N ((ll)(1e6+2))
    using namespace std;
    ll arr[1000000],tm;
    ll prime (ll);
    ll prime (ll n)
    {
        arr[1000000]={0};
        for(ll i=sqrt(n);i>=2;i--)
        {
            if(n%i==0){

                return i;
            }
        }
        return 0;



    }
    int main()
    {

            ll n,f;
    cin>>n;
    ll tm=prime(n);
    //ll st=sqrt(n);
    if(tm==0)
    {
        cout<<n*2+2<<endl;
    }
    else
    {
        cout<<tm*2+(n/tm)*2<<endl;

    }

    }

