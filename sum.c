#include <stdio.h>
void main()
{
    int n, b, a = 0, r;
    printf("enter the number");
    scanf("%d", &n);
    b = n;
    while (n > 0)
    {
        r = n % 10;
        if (a < r)
            a = r;
        if (b > r)
            b = r;
        n = n / 10;
    }
    printf("%d", a + b);
}