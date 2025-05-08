#include <stdio.h>

#define MAX 10
#define BRICKS 8

int main(void) {
	int value = 5;
	
	for (int i = 0; i <= MAX; i++) {
		int product = value * i;
		printf("%d x %d = %d\n", value, i, product);
	}
	
	printf("\n");
	
	for (int i = 0; i < BRICKS; i++) {
		for (int j = 0; j < BRICKS; j++) {
			if (i >= j) printf("#");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n");
	
	int k = BRICKS-1;
	
	for (int i = 0; i < BRICKS; i++) {
		for (int j = 0; j < BRICKS; j++) {
			if (j >= k) printf("#");
			else printf(" ");
		}
		k--;
		printf("\n");
	}
	
	return 0;
}
