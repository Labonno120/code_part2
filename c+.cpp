#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,T;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>n;
        int count=0;
        if(a>b){
        for(i=0;;i++)
        {
                if(a>n||b>n){
                cout<<count<<endl;
                break;
                }

                b+=a;
                count++;
                //cout<<"b="<<b<<endl;
                if(a>n||b>n){
                cout<<count<<endl;
                break;
                }
                a+=b;
                //cout<<"a="<<a<<endl;
                count++;

        }
        }
        else
        {
            for(i=0;;i++){
                if(a>n||b>n){
                cout<<count<<endl;
                break;
                }


                a+=b;
                //cout<<"a="<<a<<endl;
                count++;
                if(a>n||b>n){
                cout<<count<<endl;
                break;
                }
                b+=a;
                //cout<<"b="<<b<<endl;
                count++;
            }


        }

    }
}
