#include <stdio.h>
#include <string.h>
int main(){
struct student{
    int roll;
    char name[24];
    float percentage;
    char grade;
}Student1,Student2;
struct student Student3;
Student1.roll=2405984;
//Student1.name="Sunny"; //cannot take input like this
//Have to use string functions(copy) one
strcpy(Student1.name,"Sunny ");
Student1.percentage=92.4;
Student1.grade='O';
printf(" %d",Student1.roll);
printf(" %s",Student1.name);
printf(" %f",Student1.percentage);
printf("  %c",Student1.grade);


    return 0;
}