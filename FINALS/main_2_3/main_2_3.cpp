// www.hackerrank.com/challenges/printing-tokens-/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#pragma warning(disable : 4996)

int main() {
	char *s;
	s = (char*)malloc(1024 * sizeof(char));
	printf(" printing-tokens-/problem \n");
	scanf("%[^\n]", s);
	s = (char*) realloc(s, strlen(s) + 1);

	char *token = strtok(s, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}

	getchar();
	getchar();
	return 0;
}