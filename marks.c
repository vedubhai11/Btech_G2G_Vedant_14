#include<stdio.h>
int main()
{
    int a,b,c,d,e,s;
    float p;
    printf("Enter the marks of 5 subject");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    p=s/5;
    printf("sum= %d /n percentage= %f",s,p);
    return 0;
}