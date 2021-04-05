#include<iostream>
using namespace std;
int main()
{
    int k,r,p,q,i=1;
    cin>>k>>r;
    for(;;)
    {
        p=k*i;
        if(p%10==0)
        {
        cout<<i;
        break;
        }
        else{
        q=p-r;
        if(q%10==0)
        {
            cout<< i;
            break;
        }
        else
        {
            i++;
        }
        }
    }
}
