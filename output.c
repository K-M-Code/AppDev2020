#include "score.h"

void output_results(int m[], int st[]) {
	int i;
	printf("Here are the Marks:\n ");
	for (i = 0; i < MAX && m[i] != -1; i++) {
		printf("%3d", m[i]);
	}

	puts("");
	printf("Here are the statistics: \n");
	for (i = 0; i < 6; i++) {
		printf("Mark %d: %d hits \n", i, st[i]);
	}
}