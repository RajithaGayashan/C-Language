#include<stdio.h>
struct student{
	int id;
	char* name;
	int marks;
	
};
int main(){
	struct student s1,s2;
	
	s1.id=1;
	s1.name="Rajitha";
	s1.marks=88;

	s2.id=2;
	s2.name="Gayashan";
	s2.marks=67;
	
	printf("%s's id %d and %d marks\n",s1.name,s1.id,s1.marks);
	printf("%s's id %d and %d marks",s2.name,s2.id,s2.marks);
	return 0;
}
