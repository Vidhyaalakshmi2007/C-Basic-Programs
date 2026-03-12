#include <stdio.h>
#include <string.h>
#include <ctype.h>
int findvowel(char[], int);
int findcon(char[], int);
int main()
{   char s[100];
    printf("Enter string: ");
    scanf(" %[^\n]", s);
    printf("Vowel count = %d\n", findvowel(s, strlen(s)));
    printf("Consonant count = %d\n", findcon(s, strlen(s)));
    return 0;}
int findvowel(char a[], int n)
{   int count = 0;
    for (int i = 0; i < n; i++)
    {   char ch = tolower(a[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;}
    return count;}
int findcon(char a[], int n)
{   int count = 0;
    for (int i = 0; i < n; i++)
    {   char ch = tolower(a[i]);
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
            count++;}
    return count;}
