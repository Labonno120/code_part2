#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,T,count=0;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>n;
        for(i=0;;i++)
        {
                if(a>n||b>n){

                break;
                }
                else if(a>b)
                {
                    b+=a;
                    cout<<"b="<<b<<endl;
                    count++;
                }
                else
                {
                    a+=b;
                    cout<<"a="<<a<<endl;
                    count++;
                }

        }
         cout<<count<<endl;
         count=0;
        }
}
