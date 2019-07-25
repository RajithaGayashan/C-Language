#include<stdio.h>
int main(){
	int i=10;
	int* ptr=&i;
	printf("value of i=%d\n",i);
	printf("Address of i=%p\n",&i);
	printf("ptr=%p\n",ptr);
	printf("Address of ptr=%p\n",&ptr);
	
	printf("*ptr=%d\n",*ptr);
	*ptr=20;
	printf("*ptr=%d\n",*ptr);
	printf("value of i=%d",i);
}
