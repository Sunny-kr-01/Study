#include<stdio.h>
#include <string.h>
int main(){
    char str[12];
    gets(str);
    puts(str);
    printf("%d",strlen(str));//gets the length of string excluding null char..ciunts space also
    char str1[1];  // size is'nt same but yet no error...?? depends on compiler maybe..
    strcpy(str1,str);   //copies the string2 content into string 1..string1 can simply be a string(just declared)("String")
    printf("\n"),puts(str1);



    return 0;
}