#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,n,sum1=0,sum2=0,sum;
    scanf("%lld",&n);
    for(i=2;i<=n;i+=2)
    {
        sum1=sum1+i;
    }
     for(i=1;i<=n;i+=2)
    {
        sum2=sum2+i;
    }
    sum=sum1-sum2;
   printf("%lld",sum);
}
