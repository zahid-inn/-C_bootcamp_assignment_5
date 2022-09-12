#include <stdio.h>

int main()
{
    int n, x = 1;

    printf("Enter number ");
    scanf("%d", &n);

    while (x <= n)
    {
        printf("%d ", x);
        x++;
    }

    return 0;
}