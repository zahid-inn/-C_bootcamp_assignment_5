#include <stdio.h>

int main()
{
    int n, x = 1;

    printf("Enter a number\n");
    scanf("%d", &n);

    while (x < n)
    {
        printf("%d ", x);
        x+=2;
    }

    return 0;
}