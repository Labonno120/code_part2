#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,count=0;
    cin>>n>>m;
    char CH;
    for(i=0;i<n*m;i++)
    {
        cin>>CH;
        if(CH=='C'||CH=='M'||CH=='Y')count++;
    }
    if(count==0)
    cout<<"#Black&White"<<endl;
    else  cout<<"#Color"<<endl;




}
