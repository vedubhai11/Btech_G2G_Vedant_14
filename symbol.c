#include<stdio.h>
int main()
{
    char a;
    printf("enter a symbol:");
    scanf("%c",&a);
    if((a>='A' && a<='Z')||(a>='a' && a<='z'))
    {
        printf("%c is a alphabet",a);
    }
    else if(a>='0' && a<='9')
    {
        printf("%c is a number",a);
    }
    else
    {
        printf("Special character");
    }
    return 0;
}
