#include<stdio.h>
int find(int a[])
{
   int n=5,c;
   for(int i=0;i<n-1;i++)
   {
      for(int j=0;j<n-i-1;j++)
      {
         c=a[j];
         a[j]=a[j+1];
         a[j+1]=c;
      }
   }
}
int main()
{
   int a[5]={1,2,3,4,5};
   find(a);
   for(int i=0;i<5;i++)
   {
      printf("%d",a[i]);
   }
   return 0;
}
