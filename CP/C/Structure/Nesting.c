#include <stdio.h>
#include <string.h>
int main(){
typedef struct student{
    char name[24];
    float percentage;
    char grade;
}student;
 typedef struct studs{
    student s1;   //s1 is nothing but a structure...so stuct inside a struct
    char failed_subjects[19];
 }studs;

studs Rohan;
strcpy(Rohan.s1.name,"Rohan");
strcpy(Rohan.failed_subjects,"Chemistry");

    return 0;
}