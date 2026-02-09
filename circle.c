#include<math.h>
#include<stdio.h>
int main()
{
    float a,r,c;
    printf("Enter the radius of circle");
    Scanf("%f",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Area= %.2f \n Circumference= %.2f",a,c);
    return 0;
}