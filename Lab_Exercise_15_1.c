//Program Statement I
//Write a program to generate the following table:

#include<stdio.h>
#include "function.h"

int main() {
	charLine(196, 29);
	printf("\n");
	charLine('|',1);
	printf(" Data Type ");
	charLine('|', 1);
	printf(" Size in bytes ");
	charLine('|', 1);
	printf("\n");

	charLine(196, 29);
	printf("\n");
	charLine('|', 1);
	printf("  Integer  ");
	charLine('|', 1);
	printf("       %d       ",sizeof(int));
	charLine('|', 1);
	printf("\n");

	charLine(196, 29);
	printf("\n");
	charLine('|', 1);
	printf(" Charecter ");
	charLine('|', 1);
	printf("       %d       ", sizeof(char));
	charLine('|', 1);
	printf("\n");

	charLine(196, 29);
	printf("\n");
	charLine('|', 1);
	printf("\t\bFloat");
	charLine('|', 1);
	printf("%8d\t\t\b\b\b\b", sizeof(float));
	charLine('|', 1);
	printf("\n");

	charLine(196, 29);
	
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