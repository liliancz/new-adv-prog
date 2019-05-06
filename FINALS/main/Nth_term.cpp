// https://www.hackerrank.com/challenges/recursion-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
	int res = a + b + c;
	if (n == 4) return res;
	return find_nth_term(n, a, b, c);

}

int main() {
	int n, a, b, c;

	scanf("%d %d %d %d", &n, &a, &b, &c);
	int ans = find_nth_term(n, a, b, c);

	printf("%d", ans);
	return 0;
}