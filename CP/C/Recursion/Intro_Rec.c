# include <stdio.h>

void greet(){
    printf("G Mara !!\n");
    greet();     //Infinite loop  (Segmentation fault) 
}

int main(){
greet();
    return 0;
}