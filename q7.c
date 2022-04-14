#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int i = 1;
	
	while (i <= 100) {
		
		if (i % 3 == 0) {
			printf("\n%d", i);
		}
		i++;
	}
}
