#include <stdio.h>

int engKattaRaqam(int n)
{
 int max = 0;
 while (n > 0)
 {
 int digit = n % 10;
if (digit > max)
{
 max = digit;
 }
 n /= 10;
 }
return max;
}

int main()
{
int son =123281;
 int katta_son = engKattaRaqam(son);
 printf("Katta raqam: %d\n",katta_son);
 return 0;
}