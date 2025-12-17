#include <stdio.h>
int main(){
char str[]="String";
int n=sizeof(str)/sizeof(str[0]);
printf("%d\n",n);
for(int i=0;i<n;i++){
   printf("%c",str[i]);
}
printf("\n");
//although no. of characters in str is 6 but its printing 7..
//it's nothing but null value(\0)..which marks the end of an string(character array)
printf("%c",str[6]); //null value does'nt print anything..but..it has an ascii value
printf("%d\n",str[6]); //which is zero(0)...also if its passed only in char..
char ch='\0';
printf("%d",ch);
char str2[]="String\0"; // although it's manually ended by null character..yet it passes another one.. by default
int x=sizeof(str2)/sizeof(str2[0]);
printf("\n%d",x);

    return 0;
}