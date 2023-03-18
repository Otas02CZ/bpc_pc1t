// complex_num.cpp : Defines the entry point for the application.
//

#include <stdlib.h>
#include <stdio.h>

typedef struct COMPLEX_NUMBER{
	double real;
	double complex;
};

COMPLEX_NUMBER get_complex_number() {

	COMPLEX_NUMBER number;

	printf("Please insert the real part of the complex number: ");
	scanf("%lf", &number.real);
	printf("Please insert the complex part of the complex number: ");
	scanf("%lf", &number.complex);

	if (number.complex >= 0)
		printf("The number you inserted is: %g + %gi\n", number.real, number.complex);
	else
		printf("The number you inserted is: %g %gi\n", number.real, number.complex);

	return number;

}

COMPLEX_NUMBER sum_of_complex_numbers(COMPLEX_NUMBER num_1, COMPLEX_NUMBER num_2) {
	COMPLEX_NUMBER sum;
	sum.real = num_1.real + num_2.real;
	sum.complex = num_1.complex + num_2.complex;
	return sum;
}

int main()
{
	COMPLEX_NUMBER num_1 = get_complex_number();
	COMPLEX_NUMBER num_2 = get_complex_number();
	COMPLEX_NUMBER sum = sum_of_complex_numbers(num_1, num_2);

	if (sum.complex >= 0)
		printf("The sum of the specified complex numbers is: %g + %gi\n", sum.real, sum.complex);
	else
		printf("The sum of the specified complex numbers is: %g %gi\n", sum.real, sum.complex);

	return 0;
}
