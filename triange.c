#include<stdio.h>
int main ()
{
    float a,b,c;
    printf("enter three sides of triangle \n");
    scanf("%f%f%f",&a,&b,&c);
    if ((a+b>c) && (a+c>b) && (b+c>a))
    {
        printf("Its a valid triangle");
    if(a==b && b==c)
    {
        printf("it is equlateral triangle");
    }
    else if (a==b || b==c || c==a)
    {
        printf("It is a isoscales Triangle");
    }
    else 
    {
        printf("It is ba scalene triangle");
    }
}
    else 
    {
    printf("it is not a valid triangle");
    }
    return 0;
    }