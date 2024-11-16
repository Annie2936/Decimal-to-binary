#include <stdio.h>
void main()
{
    int n, a, binary = 0, i = 1;
    printf("Enter the decimal which you want to convert into binary form :\n");
    scanf("%d", &n);
    while (n != 0)
    {
        a = n % 2;
        binary = binary + a * i;
        i *= 10;
        n /= 2;
    }
    printf("The decimal number is : %d", binary);
}
