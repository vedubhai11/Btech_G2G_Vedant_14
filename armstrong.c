#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum,temp;
    printf("Armstrong number from 1 to 200 are:\n");
    for(num=1;num<=200;num++)
    {
        temp=num;
        sum=0;
        while (temp!=0)
        {
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }
        if(sum==num)
        printf("\n%d\n",num);
    }
    return 0;
}