#include <stdio.h>

int main()
{
    int n, sum, x = 1;

    printf("Enter a number ");
    scanf("%d", &n);

    while (x <= n && n > 0)
    {
        sum = x * x * x;
        printf("%d ", sum);
        x++;
    }

    return 0;
}