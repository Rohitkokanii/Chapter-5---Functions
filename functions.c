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
	for (int i = 2; i < num; i++) {
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

	for (int i = 1; i <= index; i++) {
		*result = *result * base;
	}
}

//Lab 17_3

void getDate(int* dd, int* mm, int* yy) {

	printf("\nEnter Day :");
	scanf_s("%d",&*dd);

	printf("\nEnter Month :");
	scanf_s("%d", &*mm);

	printf("\nEnter Year last 2 digits :");
	scanf_s("%d", &*yy);
}

//Lab 18_1

int Calfactorial(int n){
	if (n == 0) {
		return 1;
	}
	return n * Calfactorial(n-1);
}


//lab 18_2

int digsum(int n) {

	if (n == 0) {
		return 1;
	}
	int lastDig = n % 10;
	int sum = 0;

	return lastDig + digsum(n/=10);

}