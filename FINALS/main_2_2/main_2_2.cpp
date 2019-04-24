// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
//Complete the following function.


void calculate_the_maximum(int n, int k) {

	int *S = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
		S[i] = i + 1;

	int max_1 = 0;
	int max_2 = 0;
	int max_3 = 0;

	if (k <= n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int a_AND_b = S[i] & S[j];
				int a_OR_b = S[i] | S[j];
				int a_XOR_b = S[i] ^ S[j];
				if (a_AND_b < k)
				{
					if (a_AND_b > max_1)
						max_1 = a_AND_b;
				}
				if (a_OR_b < k)
				{
					if (a_OR_b > max_2)
						max_2 = a_OR_b;

				}
				if (a_XOR_b < k)
				{
					if (a_XOR_b > max_3)
						max_3 = a_XOR_b;

				}


			}
		}
		printf("%d\n%d\n%d\n", max_1, max_2, max_3);

	}
}

int main() {
	int n, k;
	printf(" bitwise-operators-in-c/problem \n");
	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	getchar();
	getchar();
	return 0;
}
