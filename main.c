#include <stdio.h>
#include <string.h>

void main(void){
	FILE* fp;
	int i;
	char str[100];

	for(i=0; i<3; i++){
	
	//fopnen
	fp=fopen("sample.txt","w");
	
	//scanf
	scanf("input a word: %s ",str);

	//fprintf
	fprintf(fp,"%s",str);
	
	printf("\n");
	
	}
	
	fclose(fp);
	return 0;

}



