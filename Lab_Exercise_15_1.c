//Program Statement I
//Write a program to generate the following table:

#include<stdio.h>
#include "function.h"

int main() {
	charLine('-',29);
	printf("\n");
	charLine('|',1);
	printf(" Data Type ");
	charLine('|', 1);
	printf(" Size in bytes ");
	charLine('|', 1);
	printf("\n");

	charLine('-', 29);
	printf("\n");
	charLine('|', 1);
	printf("  Integer  ");
	charLine('|', 1);
	printf("       %d       ",sizeof(int));
	charLine('|', 1);
	printf("\n");

	charLine('-', 29);
	printf("\n");
	charLine('|', 1);
	printf(" Charecter ");
	charLine('|', 1);
	printf("       %d       ", sizeof(char));
	charLine('|', 1);
	printf("\n");

	charLine('-', 29);
	printf("\n");
	charLine('|', 1);
	printf("   Float   ");
	charLine('|', 1);
	printf("       %d       ", sizeof(float));
	charLine('|', 1);
	printf("\n");

	charLine('-', 29);
	return 0;
}

/*
 O/p :-

-----------------------------
| Data Type | Size in bytes |
-----------------------------
|  Integer  |       4       |
-----------------------------
| Charecter |       1       |
-----------------------------
|   Float   |       4       |
-----------------------------

*/