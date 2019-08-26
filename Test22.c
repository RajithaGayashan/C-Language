#include<stdio.h>
int main(){
	FILE* fileRead;
	fileRead=fopen("Test.txt","r");
	char name[50];
	while(!feof(fileRead)){
		fgets(name,50,fileRead);
		puts(name);
	}
	return 0;
}
