#include<stdio.h>
int main(){
	char array[5]="Hello";
	printf("%s\n",array);
	
	char* name="Rajitha";
	printf("%s\n",name);
	printf("%c\n",*name);
	printf("%c\n",*(name+1));
	printf("%c\n",*(name+2));
	
	printf("%p\n",name);
	printf("%p\n",(name+1));
	
	name=name+1;
	printf("%s\n",(name));
	
		
}
