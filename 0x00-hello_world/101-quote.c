#include <unistd.h>
/**
 * main - Entry point of the program
 * Return: 1 (Error)
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, 59);
	return (1);
}
