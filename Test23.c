#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE* infile;
	int C;
	char file[100];
	printf("Enter file name : ");
	gets(file);
	infile=fopen(file,"r");
	if(infile==NULL){
		printf("Cannot open the file %s",file);
		exit(0);
	}
	while((C=getc(infile))!=EOF){
		putchar(C);
	}
	fclose(infile);
	
	return 0;
}
