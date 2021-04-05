#include<iostream>
using namespace std;
int main()
{
    int y,w,ans;
    cin>>y>>w;
    ans=(6-max(y,w))+1;

    if(6%ans==0)
        cout<<"1/"<<6/ans<<endl;
    else{
        if(ans==4)cout<<"2/3"<<endl;
        else cout<<ans<<"/6"<<endl;
    }
}
