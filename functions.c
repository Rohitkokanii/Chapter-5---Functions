#include<stdio.h>
//lab 15-1;

void charLine(char ch, int length) {

	for (int i = 1; i <= length; i++) {
			printf("%c", ch);
	}
}

//lab 15-2;

void fibonacci(int n) {
	int a = 0, b = 1;
	int c = 0;
	printf(" %d  %d ",a,b);
	for (int i = 3; i <= n; i++) {
		
		c = a + b;
		printf(" %d ",c);
		a = b;
		b = c;
	}
}

//Lab 16

int check(int num) {

	if (num < 0) 
		return 1;
	return 0;
}

int prime(int num) {
	
	if (num < 2) {
		return 0;
	}
	for (int i = 2; i * i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}

	return 1;
}

//lab 17_1

void areaCircum(int rad, float *a,float *c) {

	*a = 3.14 * (rad * rad);

	*c = 2*(3.14 * rad);
}

void areaPeri(int l, int w, int *a, int *p) {

	*a = l * w;
	*p = 2 * (l + w);
}

//Lab 17_2

void power(int base, int index, int* result) {

	int* result = 1;
	for (int i = 1; i <= index; i++) {
		result = *result * base;
	}
}