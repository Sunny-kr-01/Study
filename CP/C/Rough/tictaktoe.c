#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
char ttt[3][3],c;
int p1,p2,plt=1,pl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        ttt[i][j]=' ';
    }
}
printf("_______TICK_TACK_TOE________\n\n\n");
printf(" %c | %c | %c                 1 | 2 | 3 \n",ttt[0][0],ttt[0][1],ttt[0][2]);
printf("___|___|___               ___|___|___\n");
printf(" %c | %c | %c                 4 | 5 | 6 \n",ttt[1][0],ttt[1][1],ttt[1][2]);
printf("___|___|___               ___|___|___\n");
printf(" %c | %c | %c                 7 | 8 | 9 \n",ttt[2][0],ttt[2][1],ttt[2][2]);
printf("   |   |                     |   |   \n");
while(true){
if(plt==1){
    printf("Player 1 turn : ");
    scanf("%d",&p1);
    pl=p1;
    c='X';
    plt=2;
}
else{
    printf("Player 2 turn : ");
    scanf("%d",&p2);
    pl=p2;
    c='0';
    plt =1;
}
if(pl==1 || pl==2 || pl==3)ttt[0][pl-1]=c;
if(pl==4 || pl==5 || pl==6)ttt[1][pl-4]=c;
if(pl==7 || pl==8 || pl==9)ttt[2][pl-7]=c;

printf(" %c | %c | %c                 1 | 2 | 3 \n",ttt[0][0],ttt[0][1],ttt[0][2]);
printf("___|___|___               ___|___|___\n");
printf(" %c | %c | %c                 4 | 5 | 6 \n",ttt[1][0],ttt[1][1],ttt[1][2]);
printf("___|___|___               ___|___|___\n");
printf(" %c | %c | %c                 7 | 8 | 9 \n",ttt[2][0],ttt[2][1],ttt[2][2]);
printf("   |   |                     |   |   \n");

for(int i=0;i<3;i++){
    if((ttt[0][i]==ttt[1][i] && ttt[1][i]==ttt[2][i]) && ttt[0][i]=='X'){printf("Player 1 wins!!");break;}
    else if((ttt[0][i]==ttt[1][i] && ttt[1][i]==ttt[2][i]) && ttt[0][i]=='0'){printf("Player 2 wins!!");break;}}

if((ttt[0][0]==ttt[1][1] && ttt[1][1]==ttt[2][2] && ttt[2][2]=='X')||(ttt[0][2]==ttt[1][1] && ttt[1][1]==ttt[2][0] && ttt[2][0]=='X')){
    printf("Player 1 wins !! ");
    break;}
 else if((ttt[0][0]==ttt[1][1] && ttt[1][1]==ttt[2][2] && ttt[2][2]=='0')||(ttt[0][2]==ttt[1][1] && ttt[1][1]==ttt[2][0] && ttt[2][0]=='0')){
    printf("Player 2 wins !!");
 break;}



}

return 0;
}