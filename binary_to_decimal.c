#include <stdio.h>
#include <math.h>
int bintodec(int);
int main()
{   int n;
    printf("Enter the number in binary: ");
    scanf("%d", &n);
    printf("The decimal value is %d", bintodec(n));
    return 0;
}
int bintodec(int j)
{   int r, i = 0, dec = 0;
    while (j != 0)
    {   r = j % 10;
        dec = dec + r * pow(2, i);
        j = j / 10;
        i++;}
    return dec;
}
