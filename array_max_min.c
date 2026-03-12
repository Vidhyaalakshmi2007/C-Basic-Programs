#include <stdio.h>

int findmax(int a[], int);
int findmin(int a[], int);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Max = %d\n", findmax(a, n));
    printf("Min = %d\n", findmin(a, n));

    return 0;
}

int findmax(int a[], int n)
{
    int max = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}

int findmin(int a[], int n)
{
    int min = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];

    return min;
}
