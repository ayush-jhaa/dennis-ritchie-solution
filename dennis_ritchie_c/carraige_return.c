#include <stdio.h>  
int main() {  
	int j;  
	for (j = 0; j< 100; j++) {  
		printf("Loading: %d\r", j);  
		fflush(stdout);  
		sleep(1);  
	}  
	printf("\n");  
	return 0;  
}  
