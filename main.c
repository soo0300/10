#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
	char src[]  = "The worst things to eat before you sleep";
	char dst[100];
	
	*dst = strcpy(dst, src);
	
	printf("copied string: %s",dst);	
}


