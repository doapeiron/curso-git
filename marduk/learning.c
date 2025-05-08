#include <stdio.h>

#define BRICKS 8

int main(void) {
	int k = BRICKS-1;
	
	for (int i = 0; i < BRICKS; i++) {
		for (int j = 0; j < BRICKS; j++) {
			if (j >= k) printf("#");
			else printf(" ");
		}
		
		printf("  ");
		
		for (int b = 0; b < BRICKS; b++) {
			if (b > i) printf(" ");
			else printf("#");
		}
		
		printf("  ");
		
		for (int c = 0; c < BRICKS; c++) {
			if (c >= k) printf("#");
			else printf(" ");
		}
		
		printf("  ");
		
		for (int d = 0; d < BRICKS; d++) {
			if (d > i) printf(" ");
			else printf("#");
		}
		
		// FINAL
		k--;
		printf("\n");
	}
	
	return 0;
}
