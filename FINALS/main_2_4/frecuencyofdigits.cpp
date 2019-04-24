// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
int main() {

	char *s;
	s = (char*)malloc(1024 * sizeof(char));
	printf(" frequency-of-digits-1/problem \n");
	scanf("%[^\n]", s);
	
	char num[] = { '0', '1', '2','3','4','5','6','7','8','9' };
	int count[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	for (int i = 0; i < strlen(s); i++)
	{
		for (int j = 0; j < 10 ; j++)
		{
			if (s[i] == num[j])
			{
				count[j]++;
			}
		}
	}

	for (int j = 0; j < 10; j++)
	{
		printf("%d", count[j]);
		
	}
	


	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	getchar();
	getchar();
	getchar();
	return 0;
}