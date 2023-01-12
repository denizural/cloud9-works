#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char my_var = 65;
	printf("my_var as an character: %c\n", my_var);
	printf("my_var as an integer: %d\n", my_var);
	printf("my_var as a long integer: %ld\n", my_var);
	printf("my_var as a short integer: %hi\n", my_var);
	printf("my_var as an float: %d\n", my_var);
	printf("my_var in scientific notation: %E\n", my_var);
	printf("my_var as an octal number: %o\n", my_var);
	printf("my_var as an hexedecimal number: %x\n", my_var);
	printf("The address of the my_var in the RAM: %p\n", &my_var);
	
	printf("===================\n");
	
	if (my_var) {
		printf("my_var has a Boolean True value: %d\n", my_var);
		printf("In C, any non-zero value is true\n");
	}
	
	if (0) {
		printf("This will not print since 0 is false\n");
	}
	
	if (!0) {
		printf("This will print since 'not zero' is True\n");
	}

	return EXIT_SUCCESS;
}
	