#include <stdio.h>
#include <unistd.h>

/**
 * main -Entry point
 * Description: - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
return (0);

}

