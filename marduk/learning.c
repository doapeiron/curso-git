#include <stdio.h>

#define MAX 10

int main(void) {
	int value = 5;
	
	for (int i = 0; i <= MAX; i++) {
		int product = value * i;
		printf("%d x %d = %d\n", value, i, product);
	}
	
	return 0;
}
