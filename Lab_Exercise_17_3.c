/*
Program Statement 3
Write a program to accept date, month, year from the user in a function called getDate ( ) , and print that date
in main ( ) in dd/mm/yy format.
*/

#include<stdio.h>
#include "function.h"

int main() {

	int dd, mm, yy;

	getDate(&dd,&mm,&yy);

	printf("\nDate is : %d/%d/%d \n",dd,mm,yy);

	return 0;
}