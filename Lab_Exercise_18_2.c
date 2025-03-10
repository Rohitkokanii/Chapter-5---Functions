/*
Problem Statement 2
Write a recursive function, digSum () , to find the sum Of digits Of an integer number.
*/

#include<stdio.h>
#include"function.h"

int main() {
	int  n = 1234;

	int result = digsum(n);
	printf("Sum : %d", result);

	return 0;
}