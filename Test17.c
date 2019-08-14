#include<stdio.h>
#include<string.h>
void main(){
	char* name="Rajitha Gayashan";
	printf("String length =%d",strln(name));
}

int strln(char* s){
	int count=0;
	while(*s){
		count++;
		s++; 
	}
	return count;
}
