#include <stdio.h>

/**
 * main - prints the file name it was compiled from
 * Return: always 0 success
 */
#define FILE_NAME printf("%s\n",__FILE__)
int main(void)
{
	FILE_NAME;
	return (0);
}
