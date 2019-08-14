#include<stdio.h>
int main(int argc,char *argv[]){
	int myArray[]={1,2,3};
	get(myArray);
	int *m=myArray;
	get1(m);	
}
int get( int myArray[]){
	printf("%d\n",myArray[1]);
}
void get1(int *p){
	
	p++;printf("%d",*p);
}
