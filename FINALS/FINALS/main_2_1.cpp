// https://www.hackerrank.com/challenges/pointer-in-c/problem

#include <iostream>
#include <stdio.h>
#pragma warning(disable : 4996)

void update(int *a, int *b)
{
	int temp_a = *a;
	*a = *a + *b;
	*b = abs(temp_a - *b);
}

int main() 
{
    int a;
	int b;
	scanf("%d", &a);
    scanf("%d", &b);
	update(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);

	getchar();
	getchar();
	getchar();
    return 0;      
}  