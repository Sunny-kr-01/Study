#include <stdio.h>
#include <string.h>
int main(){
char str[10];
fgets(str,sizeof(str),stdin);
str[0]='b';
printf("%s",str);


    return 0;
}