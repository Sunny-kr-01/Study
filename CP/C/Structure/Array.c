#include <stdio.h>
#include <string.h>
int main(){
typedef struct student{
    char name[30];
    int roll;
    float percentage;
    char grade;

}student;
student arr[3];
strcpy(arr[0].name,"Sunny");
printf("%s",arr[0].name);
//arr[1]={"SUN",2405984,92.4,'O'};//dont work...first u have to initialise
student s={"Sunny",2405984,92.4,'O'};
arr[1]=s;
printf("\n%s",arr[1].name);
return 0;
}