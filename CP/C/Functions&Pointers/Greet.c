#include <stdio.h>
void greet3(){                                          //for multiple functions,if the called out function is not                 
    printf("\n\nFuckoff !!!");                          //above, it will give an error
}                                                       //so to avoid that error we specify the function type too
                                                        //(line no. 8)
void greet(){
    printf("\nHow are you !!\n");
    void greet2();
    greet2();
}

void greet2(){
    printf("\n\nI am Fine\n");
    greet3();
}

int main(){
printf("Hey !!\n");
greet();
    
}