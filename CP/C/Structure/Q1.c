#include <stdio.h>
int main(){
typedef struct book{
char name[30];
float price;
int pages;
}book;
int n;
printf("Enter the no. of books : ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    char str[30];
    printf("Enter name of the book : ");
    gets(str);
    book str;

}

return 0;
}