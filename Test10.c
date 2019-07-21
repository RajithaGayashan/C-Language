#include<stdio.h>
int main(){
	float marks;
	printf("Enter your marks : ");
	scanf("%f",&marks);
	if( marks<=100 && marks>=80){
		printf("Your grade : A+");
	}else if(marks<=79 && marks>=75){
		printf("Your grade : A");
	}else if(marks<=74 && marks>=70){
		printf("Your grade : A-");
	}else if(marks<=69 && marks>=65){
		printf("Your grade : B+");
	}else if(marks<=64 && marks>=60){
		printf("Your grade : B");
	}else if(marks<=59 && marks>=55){
		printf("Your grade : B-");
	}else if(marks<=54 && marks>=50){
		printf("Your grade : C+");
	}else if(marks<=49 && marks>=45){
		printf("Your grade : C");
	}else if(marks<=44 && marks>=40){
		printf("Your grade : C-");
	}else if(marks<=39 && marks>=35){
		printf("Your grade : D+");
	}else if(marks<=34 && marks>=30){
		printf("Your grade : D");
	}else if(marks<=29 && marks>=0){
		printf("Your grade : E");
	}else{
		printf("Invalid Entered");
	} 
}
