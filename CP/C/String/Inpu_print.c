#include <stdio.h>
int main(){
int n;
scanf("%d",&n,printf("Enter n :"));
char str2[]={'S','t','r','\0','i','n','g'};
char str[n]; // size has no meaning.. it will get input as much provided but..line 10
scanf("%s",str,str,str);   //%s spesifies string and ..
printf("%s\n",str,str,str); //it consider a null value(\0) in end so..
printf("%s",str2);  // if "\0" is provided manually it will not print anything after that
char str3[11]="String"; //any size less than th eactual size will give error...
printf("\n%s",str3);

    return 0;
}