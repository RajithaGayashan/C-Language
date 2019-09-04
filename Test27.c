#include<stdio.h>
int fac(int);
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("%d",fac(num));
}
int fac(int a){
	long int total=0;
	if(a==1 || a==0){
		return 1;
	}else{
		total=a*fac(a-1);
	}
	return total;
}
