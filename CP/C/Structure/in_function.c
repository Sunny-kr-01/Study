#include <stdio.h>
typedef struct student{
    int roll;
    char name[26];
    float percentage;
    char grade;
}student;

void print(student s){
    printf("%d  ",s.roll);
    fputs(s.name,stdout);   //puts(changes the line...we can use fputs("string",stdout)
    printf("  %f ",s.percentage);
    printf("  %c",s.grade);
}


int main(){
student s1={2405984,"Sunny",92.4,'A'};
// printf("%s",s1.name);
// student s2;
// s2.roll=12345;
// printf("%d",s2.roll);
print(s1);
return 0;
}