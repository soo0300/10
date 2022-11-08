#include <stdio.h>
#include <string.h>

void main(void){
	FILE* fp=NULL;
	char c;
	
	fp = fopen("sample.txt","r");
	
	if(fp==NULL){
		printf("파일을 못 열음\n");
	}
	
	c = fgetc(fp);
	
	
	while((c==fgetc(fp)) !=EOF){
		putchar(c);
	}
	
	fclose(fp);
	return 0;

}



