// https://www.hackerrank.com/challenges/recursion-in-c/problem


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
	
	//int 

	if (n == a) return a;
	if (n == b) return b;
	if (n == c) return c;

	
	for (int i = 0, i < n; i++)
	{




		return find_nth_term(n, n-1, n-2, n-3)


	


	}
	
	
	



};

int main() {
	int n, a, b, c;

	scanf("%d %d %d %d", &n, &a, &b, &c);
	int ans = find_nth_term(n, a, b, c);

	printf("%d", ans);
	return 0;
}

