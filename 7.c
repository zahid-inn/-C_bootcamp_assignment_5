#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number ");
    scanf("%d", &n);

    while (n > 0)
    {
        if (n % 2 != 0)
        {
            n -= 1;
        }

        printf("%d ", n);
        n-=2;
    }

    return 0;
}