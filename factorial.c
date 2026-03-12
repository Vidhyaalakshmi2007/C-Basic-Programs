#include <stdio.h>

int fact(int);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Factorial = %d", fact(n));
    return 0;
}

int fact(int i)
{
    if (i <= 1)
        return 1;
    else
        return i * fact(i - 1);
}
