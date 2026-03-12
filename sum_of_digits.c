#include <stdio.h>

int sod(int);

int main()
{
    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    printf("The sum = %d", sod(a));
    return 0;
}

int sod(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sod(n / 10);
}
