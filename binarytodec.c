#include <stdio.h>
int main()
 {
    long long binary;
    int decimal = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    long long temp = binary;
    while (temp > 0) {
        remainder = temp % 10;      
        decimal += remainder * base;
        temp /= 10;                
        base *= 2;                  
    }
    printf("Binary: %lld\n", binary);
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
