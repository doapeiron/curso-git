#include <stdio.h>

#define MAX 10

int main(void) {
	int value = 5;
	
	for (int i = 0; i <= MAX; i++) {
		int product = value * i;
		printf("%d x %d = %d\n", value, i, product);
	}
	
	printf("\n");
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i >= j) printf("#");
			else printf(" ");
		}
		printf("\n");
	}
	
	printf("\n");
	
	return 0;
}
