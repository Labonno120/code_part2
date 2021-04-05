#include <stdio.h>

int main()
{
 char array[100];
 int n,i,j,temp,x;
  int count=0;


  scanf("%s",&array);
   n=strlen(array);

  for (i=0;i<n-1;i++)
  {
    for (j=0;j<n-i-1;j++)
    {
      if (array[j] > array[j+1])
      {
        temp= array[j];
        array[j]= array[j+1];
        array[j+1]= temp;
      }
    }
  }
  for(j=0;j<n;j++)
  {

  if(array[j]==array[j+1])
    count++;
  }
  x=n-count;
  if(x%2==0)
    printf("CHAT WITH HER!");
  else
    printf("IGNORE HIM!");
}
