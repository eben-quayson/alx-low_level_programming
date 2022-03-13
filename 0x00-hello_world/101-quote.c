#include <stdio.h>
#include <unistd.h>

/**
 * main prints the string without the func printf, man and puts
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19",59);
	return(1);
}
