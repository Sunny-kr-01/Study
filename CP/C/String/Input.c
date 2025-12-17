#include <stdio.h>
int main(){
char str[12];
printf(gets(str)); //takes input and also prints the same
printf(gets(str),printf("\nEnter string : "));  //prints command before taking input..and prints in second line...
printf("\n");
gets(str);
puts(str);



    return 0;
}