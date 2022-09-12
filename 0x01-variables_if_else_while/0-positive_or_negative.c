#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main - Entry point
*this program will print is positive if number is greater than o
*it will print is negative if n is less than 0
*it will print zero if n is equal to 0
*Return: Always 0 (Successs/correct)
*/
/* betty style docs for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
