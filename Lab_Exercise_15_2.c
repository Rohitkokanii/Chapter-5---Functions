//Program Statement 2 
// Write a function fibonacci() to generate the terms Of the Fibonacci series.The number Of terms should be
// entered by the user in main().The series should be printed in the function.The terms of the Fibonacci series
// areo 112358 13 21...

#include<stdio.h>
#include "function.h"

int main() {

	int num;
	printf("\nEnter No. :- ");
	scanf_s("%d",&num);

	fibonacci(num);
	return 0;
}