#include<stdio.h>
int main(){
    char name1[10]="Rajitha";
    char name2[10]="Gayashan";
    char name3[20]="Rajitha Gayashan";
    name3[0]='r';
    printf("%s\n",name1);
    printf("%s\n",name2);
    printf("%s\n",name3);
}