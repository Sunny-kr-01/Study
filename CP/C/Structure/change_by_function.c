#include <stdio.h>
#include <string.h>
typedef struct student{
    int roll;
    char name[26];
    float percentage;
    char grade;
}student;

void print(student s){
    printf("%d  ",s.roll);
    fputs(s.name,stdout);   
    printf("  %.2f ",s.percentage); //.2 after '%' printf only 2 digits after decimal
    printf("  %c",s.grade);
}

void change(student* s){
    (*s).grade='E';
    s->percentage=96.69;
    strcpy(s->name,"Sunny Kumar");
    
}

int main(){
student s1={2405984,"Sunny",92.4,'A'};

change(&s1);
print(s1);
return 0;
}