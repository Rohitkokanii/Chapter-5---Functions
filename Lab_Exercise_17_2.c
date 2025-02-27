/*
Program Statement 2
Write a function int power (int base, int index, int *result) , which calculates the power of a user
entered positive base and index passed to it from main () . Trap the 'overflow' error if any, in this function, and
If the value of result exceeds the range of
return the error status. Display the result or error status in main () .
its data type then we say that overflow has occurred. In this case, consider overflow if the result is negative.
*/

#include<stdio.h>
#include "function.h"

int main() {

	int base, index, result;
	printf("\nEnter Base : Index = ");
	scanf_s("%d%d",&base,&index);

	power(base,index,&result);

	if (result < 0) {
		print("Error : Overflow");
	}
	else {
		print("\n Power = %d",result);
	}

	return 0;
}