#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    ll n,s;
    cin>>n>>s;
    if(s%n>0)
       cout<<s/n+1<<endl;
    else
       cout<<s/n<<endl;
}
