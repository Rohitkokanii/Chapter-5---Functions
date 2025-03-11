/*
Problem Statement 1
Implement function fibonacci ( ) to make it recursive. Call the function from main ( ) .
*/

#include<stdio.h>
#include "function.h"

int main() {

	int n = 10;
	int a = 0;
	int b = 1;
	printf("%d %d ", a, b);
	fibRec(n,a,b);
	
	return 0;
}