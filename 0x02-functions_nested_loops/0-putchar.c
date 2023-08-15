#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *str = "_putchchar\n";
    int len = 7; // Length of the string excluding null terminator

    write(1, str, len);
    return (0);
}

