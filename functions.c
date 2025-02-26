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
	
	for (int i = 2; i < num; i++) {
		if (i % num == 0) {
			return 0;
		}
		else {
			return 1;
		}
			
		
	}

}