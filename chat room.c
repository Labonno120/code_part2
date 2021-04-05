#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    char y[]="hello";
    int i,n,j=0,count=0;
    scanf("%s",x);
    n=strlen(x);
    for(i=0;i<n;i++)
    {
        if(x[i]==y[j])
        {
           j++;
            count++;
        }
    }
    if(count==5)
        printf("YES");

    else
        printf("NO");

}
