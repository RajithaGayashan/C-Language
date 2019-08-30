#include<stdio.h>
int main(){
	FILE* file;
	file=fopen("Test.txt","w+");
	fprintf(file,"I go to Temple");
	fseek(file,8,SEEK_SET);
	//fseek(file,-6,SEEK_END);
	fprintf(file,"School");
	fclose(file);
	return 0;
}
