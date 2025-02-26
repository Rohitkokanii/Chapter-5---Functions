/*
Program Statement
Accept a number from the user and pass it to a function called check () . This function returns the status of the
number as either positive or negative. As long as the number is negative the user should be asked to re-enter
the number. Otherwise the number should be passed as a parameter to prime() function. This function
accepts a number as a parameter and checks whether the number is prime or not. This message should be
printed in main ( ) .
*/

#include<stdio.h>
#include "function.h"

int main() {
	int num;
	printf("\nEnter Positive Num = ");
	scanf_s("%d",&num);

	while (check(num)) {
		printf("\nEnter Positive Num = ");
		scanf_s("%d", &num);
	}

	
	if (prime(num)) {
		printf("\nPrime\n");
	}
	else {
		printf("\nNot Prime\n");
	}
	return 0;
}
