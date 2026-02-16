#include<stdio.h>
int main()
{
    float N;
    printf("Enter a number: ");
    scanf("%f",&N);
    if(N>0)
    {
        printf("The number is positive");
    }
    else if(N<0)
    {
        printf("The number is negative");
    }
    else if(N==0)
    {
        printf("the number is equal to zero");
    }
    else
    {
        printf("the is imaginary");
    }
    return 0;
}
