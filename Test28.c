#include<stdio.h>
int main(){
	int myarray[]={10,20,30,40,50};
	get1(myarray);
	int* p=myarray;
	get2(p);
	return 0;
}
void get1(int array[]){
	printf("%d\n",array[1]);
}

void get2(int* a){
	printf("%d",*(a+3));
}
