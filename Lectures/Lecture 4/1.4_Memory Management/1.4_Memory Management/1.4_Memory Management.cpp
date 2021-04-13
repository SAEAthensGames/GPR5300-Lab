//Stack Allocation
#include <iostream>
#include<stdio.h>

int total;
int Square(int x) {
	
	return x * x;
}

int SquareofSum(int x, int y) {
	int z = Square(x + y);
	return z;
}

int main()
{
9
	int a = 4;
	int b = 5;

	total = SquareofSum(a, b);
	printf("output = %d", total);
}



