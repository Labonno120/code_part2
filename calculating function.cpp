#include<iostream>
using namespace std;
int main()
{
    long long int n,p;
    cin>> n;
    if(n%2!=0)
    {
       p=-((n+1)/2);
    }
    else
    {
        p=n/2;
    }
    cout<<p;

}
