#include <stdio.h>

int main ()
{
	int age;
	float gpa;
	char grade;
	
	printf("Enter your age: ");
	scanf("%i", &age);

	printf("Enter your gpa: ");
	scanf("%f", &gpa);

	printf("Enter your grade: ");
	scanf(" %c", &grade);

	printf("age = %i, gpa = %f, grade = %c\n",age, gpa, grade);

	return 0;
}
