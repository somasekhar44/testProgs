#include<stdio.h>

int main(){
	FILE *fp = fopen("test.asm","rw");
	char line[80];
	if(fp == NULL){
		fprintf(stderr , "Unable to open the file test.asm\n");
	}else{
		printf("Successfully opened the file..\n");
		fgets(line, 80 , fp);
		fputs(line , fp);
//		fflush(fp);
		while(fgets(line , 80 , fp) != NULL){
			printf("%s",line);
		}
	}
	printf("\n");
	return 0;
}
