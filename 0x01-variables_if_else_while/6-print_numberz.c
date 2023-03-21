#include <stdio.h>
/**
 *main - Entry point
 *discription: 'printf num of base 10 putchar'
 *Return:always 0
 */
int main(void)
{
	int n;

for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
