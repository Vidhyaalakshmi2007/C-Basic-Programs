#include <stdio.h>
#include <math.h>
float simpleitr(float, float, float);
float compounditr(float, float, float);
int main()
{   float prin, rate, timeperiod;
    printf("ENTER PRINCIPAL: ");
    scanf("%f", &prin);
    printf("ENTER RATE OF INTEREST: ");
    scanf("%f", &rate);
    printf("ENTER TIME PERIOD IN YEARS: ");
    scanf("%f", &timeperiod);
    printf("SIMPLE INTEREST IS %f\n", simpleitr(prin, rate, timeperiod));
    printf("COMPOUND INTEREST IS %f\n", compounditr(prin, rate, timeperiod));
    return 0;
}
float simpleitr(float p, float r, float t)
{   return (p * r * t) / 100.0;}
float compounditr(float p, float r, float t)
{   return p * pow((1 + (r / 100.0)), t) - p;}
