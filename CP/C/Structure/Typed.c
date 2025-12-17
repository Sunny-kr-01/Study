#include <stdio.h>
#include <string.h>
int main(){
typedef struct student{   //maybe... it defines the class/stucture(blueprint) and gets it intialised(nooo!!!..)
    int roll;
    char name[24];
    float percentage;
    char grade;
}student;
student S1;//dont need to write struct everytime
S1.grade='C';
printf("%c",S1.grade);


    return 0;
}