#include <stdio.h>

int main()
{
    int n, x = 2;

    printf("Enter a number\n");
    scanf("%d", &n);

    do
    {
        printf("%d ", x);
        x += 2;
    } while (x <= n);

    return 0;
}