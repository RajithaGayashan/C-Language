#include<stdio.h>
int main(){
	int C;
	FILE* file;
	char name[30];
	printf("Enter file name : ");
	gets(name);
	file=fopen(name,"r");
	fseek(file,-1,SEEK_END);
	int i=2;
	while((C=getc(file))!=EOF){
		putchar(C);
		fseek(file,-i,SEEK_END);
		i++;
	}
	fclose(file);
	return 0;
}
