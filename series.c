#include<stdio.h>
int main()
{
    int i,n;
    float s;
    printf("Enter the value of n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Please enter the positive integer");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            s+=1.0/i;
        }
        printf("The sum of the series is:%f",s);
    }

}
