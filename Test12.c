#include<stdio.h>
#define name "Rajitha Gayashan"
#define age 23
#define grade 'A'
#define marks 76.9875
#define condition 76>75
void main(){
	printf("Your name : %s\n",name);
	printf("Your age : %d\n",age);
	printf("Your grade :%c\n",grade);
	printf("Your marks :%f\n",marks);
	if(condition==1){
		printf("True condition");
	}else{
		printf("False condition");
	}
}
