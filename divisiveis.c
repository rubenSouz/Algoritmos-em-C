#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int i;
	
	for (i = 15; i <= 250; i++) {
		
		if (i % 2 != 0 && i % 3 == 0) {
			printf("\n%d", i);
		}
	}
}
