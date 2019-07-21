#include<stdio.h>
int main(){
	char grade;
	printf("Enter your grade : ");
	scanf("%c",&grade);
	switch(grade){
		case 'A':
			printf("Excellent");
			break;
		case 'B':
			printf("Well Done");
			break;
		case 'C':
			printf("Try Again");
			break;
		default:
			printf("Invalid grade");
	}
}
