#include<math.h>
#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the temperature in celcius=");
    scanf("%f",&C);
    F=32+(9*C/5);
    printf("The Temperature in Feherahnite is =%.2f",F);
    return 0;
}
