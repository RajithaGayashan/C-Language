#include<stdio.h>
int main(){
	FILE* filewrite;
	char name[100];
	filewrite=fopen("Test.txt","w");
	printf("Enter your university : ");
	gets(name);
	fprintf(filewrite,name);
	fclose(filewrite);
	return 0;
	
}
