#include<stdio.h>
int main()
{
    int n,i;
    int t1=0,t2=1;
    int nxtterm=0;
    printf("enter the no. of terms");
    scanf("%d",&n);
    printf("fibonacci series: ");
    for(i=1;i<=n;i++)
{
    if(i<=1)
    {
    nxtterm=i;
    }
    else
    {
        nxtterm=t1+t2;
        t1=t2;
        t2=nxtterm;
    }
    printf("%d",nxtterm);
}
return 0;
}