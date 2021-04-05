#include<iostream>
using namespace std;
int main()
{
    int n,i,m;
    cin>> n;
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    for(i=0;i<n;i++)
    {
       if(arr[i]%2==0)
        {
            m=(arr[i]/2)-1;
            cout<< m<< endl;
        }
        else
        {
            m=arr[i]/2;
            cout<< m<< endl;
        }
    }
}
