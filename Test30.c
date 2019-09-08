#include<stdio.h>
int main(int argc,int* argv[]){
	printf("You have entered %d arguments\n :",argc);
	int i;
	for(i=0;i<argc;i++){
		printf("%s\n",argv[i]);
	}
}		
