#include<stdio.h>
int main(){
	FILE* file;
	file=fopen("Test.txt","a");
	char word[40];
	printf("Enter your home address :");
	gets(word);
	fprintf(file,word);
	fclose(file);
	return 0;
}
