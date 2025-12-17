//String  --> array of a character with null character at the end'(\0)'...
#include <stdio.h>
int main(){
char arr[]={'H','E','L','L','O','!'};
char str[]="Hello world !";
int n=sizeof(str)/sizeof(str[0]);
for(int i=0;i<n;i++){
    printf("%c",str[i]);
}


    return 0;
}