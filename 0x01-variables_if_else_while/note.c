#include <stdio.h>

/**
 * this code prints out the ASCII for alphabets
 */

int main(void)
{
	char c;

	printf("Enter any alphabet:\n");
	scanf("%c", &c); /*this collects the input*/

	printf("The ASCII for %c is:%d\n", c, c);
	return (0);

}
