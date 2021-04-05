#include<iostream>
#include<cstring>
using namespace std;

int main() {
	string s;
	int n,cnt_1=0,cnt_2=0,i;
	cin>> s;
	n=s.size();
	for(i=0;i<n;i++)
    {
        if(s[i]=='(')
            cnt_1++;
        else if(s[i]==')')
            cnt_2++;
    }
	if(n%2==0&&cnt_1==cnt_2)
    {


	cout<< n/2;
    }
    else
        cout<<"0";

}
