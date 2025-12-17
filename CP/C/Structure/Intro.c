#include <stdio.h>
int main(){
struct student{
    int roll;
    char name[24];
    float percentage;
    char grade;
}; //(Can be declared like this also..(after '}'))
// Its not declaration...its only a map  it is as if we have created a datatype..just int is a data type which stored integers
//so to create a dabba (initialise)..
struct student Sunny; //declaration
Sunny.grade='A';
//Sunny.name="jhvhyf "; cannot take input like this
Sunny.percentage=92.3;
Sunny.roll=2405984;
printf("%c",Sunny.grade);
Sunny.grade='O';
printf("\n%c",Sunny.grade);
//direct method
struct student Bsdk={222,"Bsdk",69.696969,'C'};//declared and intialised
puts(Bsdk.name);
    return 0;
}