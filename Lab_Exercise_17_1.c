/*
Lab Exercise 17
Objective
Pass parameters by address
Program Statement 1
Write a menu driven program, which allows the user to select either a circle or a rectangle.
a. Write a single function areaCircum() that calculates the area and circumference of a circle. The
values of area and circumference should be printed in main ( ) .
b. Write a single function areaperi( ) that calculates the area and perimeter Of a rectangle. The
values of area and perimeter should be printed in main () .
*/

#include<stdio.h>
#include "function.h"

int main() {

	int choice;
	printf("\nEnter \n1.Circle \n2.Rectangle \n3.Exit \n= ");
	scanf_s("%d",&choice);

	switch (choice) {
		float a, c;
		int l, w,p,recArea;
		int rad;
	case 1:printf("\nCircle\n");
		printf("\nEnter Radius = ");
		scanf_s("%d",&rad);
		areaCircum(rad,&a,&c);
		printf("\nArea = %g \n\nCircumference = %g\n",a,c);
		break;
	case 2:printf("\nRectangle\n");
		printf("\nEnter Length And Width = ");
		scanf_s("%d%d",&l,&w);
		areaPeri(l, w, &recArea, &p);
		printf("\nArea = %d \n\nPerimeter = %d\n", recArea,p);
		break;
	case 3:printf("\nExit : Thank You!!\n");
		break;
	default :
		printf("\nInvalid input\n");
	}

	return 0;
}