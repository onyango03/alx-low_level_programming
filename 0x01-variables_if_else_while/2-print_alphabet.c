#include <stdio.h>
/**
*Main - print alphabet in lowercase
*
*Return: 0
*/
int main(void)
char ch;
for (ch = 'a' ; 'z' ; ch++)
if (ch != 'e' && ch != 'q')
{
putchar (ch);
}
putchar('\n');
return (0);
