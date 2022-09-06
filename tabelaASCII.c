#include <stdio.h>

int main(void) {
	unsigned char i;
	for(i=0; i<255; i++)
		printf("\n %d- %c", i, i);
  
  return 0;
}