#include <stdio.h>

int main()

{

	printf("This is my c basics program\n");
	
	int num;	// type name;
	printf("Type a number: ");	// prompt user for a number
	scanf("%i", &num);		// store user input in num

	printf("You entered %i\n", num);
	return 0;
}
