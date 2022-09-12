#include <stdio.h>

int main()
{
    int n, sum, x = 1;

    printf("Enter number ");
    scanf("%d", &n);

    do
    {
        printf("%d x %d = %d \n", n, x, sum = n * x);
        x++;
    } while (n > 0 && x < 11);

    return 0;
}