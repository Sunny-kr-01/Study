#include <stdio.h>
int main(){
// char* str="String";
// printf("%s",str);
// // str[0]='s';//cannot change single values..
// char str1[]="String";
// str1[0]='s';
// printf("\n%s",str1);//but..with pointer type we can edit the whole string
// str="string ";      ///but normally .. we can't
// printf("\n%s",str); //**now str will have different address

char str2[]="String";
char* gtr2=str2; //shallow copy
printf("\n%s",str2);
printf("\n%s",gtr2);
str2[0]='s'; //changes the value in gtr2 also
printf("\n%s",str2);
printf("\n%s",gtr2);//gtr is str but with different name..it stores whatever's on that address

    return 0;
}