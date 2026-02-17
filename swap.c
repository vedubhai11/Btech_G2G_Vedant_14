#include<stdio.h>
int main (){
    int a,b;
    printf("entre a = ");
    scanf("%d", &a);
     printf("entre b = ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swapping ");
    printf("a=%d",a);
    printf("b=%d",b);
    return 0 ;


}
