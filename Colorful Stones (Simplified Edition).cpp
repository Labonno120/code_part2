#include<iostream>
#define ll long long int
using namespace std;
int main()
{
    int i,j;
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    for( i=0, j=0;i<s1.size(),j<s2.size();j++)
    {
       if(s2[j]==s1[i])
        i++;
    }
    cout<<i+1<<endl;
}
