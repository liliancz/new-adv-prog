#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
	int N;
	int Pi[10000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &Pi[i]);
	}
	int temp = Pi[0];
	int min = 0;
	for (int i = 0; i < N; i++)
	{
		min = abs(temp - Pi[i]);
		temp = abs(Pi[i]-Pi[i+1]);

		if (temp < min) min = temp;
	}


	printf("%d", min);

		return 0;
}