#include <stdio.h>

/**
 * main prints the size of various data types on computer
 * return 0 if program runs properly
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n",sizeof(char));
	printf("Size of a int: %d byte(s)\n",sizeof(int));
	printf("Size of a long int: %d byte(s)/\n",sizeof(long int));
	printf("Size of a long long: %d byte(s)\n",sizeof(long long));
	printf("Size of a float: %d byte(s)\n",sizeof(float));
	return (0);
}
