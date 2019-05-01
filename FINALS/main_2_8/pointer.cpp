//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <iostream>
#include <stdio.h>
#pragma warning(disable : 4996)

void update(int *a, int *b) {
	int temp_a = *a;
	*a = *a + *b;
	*b = abs(temp_a - *b);
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}

