#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: Number of command line arguments
 * @argv: command line arguments in string format
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int x;

	x = argc - 1;
	printf("%d\n", x);
	return (0);
}
