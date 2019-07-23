#include<stdio.h>
int i,array[100],j,ans=0,c;
int main(){
		int num,n;
		printf("What are you want to operator:\n1.sum\n2.sub\n3.mal\n4.dev\n");
		scanf("%d",&c);
		printf("How many number are you want to calculate :");
		scanf("%d",&num);
	
		for(i=1;i<=num;i++){
			printf("Enter %d number : ",i);
			scanf("%d",&n);
			array[i-1]=n;
		}
		
switch(c){
	case 1:
		printf("answer =%d",sum());
		break;
	case 2:	
		printf("answer =%d",sub());
		break;

	case 3:
		printf("answer =%d",mal(num));
		break;
		
	case 4:
		printf("answer =%d",dev(num));
		break;
		
	default :
		printf("Invalid Input");	
}
}

int sum(){
	for(j=0;j<=i;j++){
		ans=ans+array[j];
	}
	return ans;
}

int sub(){
	ans=array[0]-array[1];
	for(j=2;j<=i;j++){
		ans-=array[j];		
	}
	return ans;	 
}

int mal(int num){
	ans=array[0]*array[1];
	for(j=2;j<num;j++){
		ans*=array[j];
	}
	return ans;	
}

int dev(int num){
	ans=array[0];
	for(j=1 ;j<num;j++){
		ans=ans/array[j];
	}
	return ans;
}	
