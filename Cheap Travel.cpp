#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b,p,q,r;
    cin>>n>>m>>a>>b;
    p=n*a;
    q=(n/m)*b+(n%m)*a;
    r=((n/m)+1)*b;
    if(p>=q&&r>=q)
        cout<<q;
    else if(q>=p&&r>=p)
        cout<<p;
    else
        cout<<r;
}
