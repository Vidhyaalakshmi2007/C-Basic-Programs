#include <stdio.h>

int isprime(int);

int main()
{
    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    if (isprime(a))
        printf("%d is a prime number", a);
    else
        printf("%d is not a prime number", a);

    return 0;
}

int isprime(int n)
{
    int r;

    if (n <= 1)
        return 0;

    for (r = 2; r <= n / 2; r++)
    {
        if (n % r == 0)
            return 0;
    }
    return 1;
}
