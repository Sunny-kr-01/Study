#include <stdio.h>
#include <stdlib.h>

void make_sparse(int n,int m,int cnt,int triplet1[cnt+1][3],int mat[n][m]){
    triplet1[0][0]=n;
    triplet1[0][1]=m;
    triplet1[0][2]=cnt;
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]!=0){
                triplet1[k][0]=i;
                triplet1[k][1]=j;
                triplet1[k][2]=mat[i][j];
                k++;
            }
        }
    }
}

void print_sparse(int cnt,int triplet[cnt+1][3]){
    for(int i=0;i<cnt+1;i++){
        for(int j=0;j<3;j++){
            printf("%d ",triplet[i][j]);
        }printf("\n");
    }
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",b[i][j]);
        }printf("\n");
    }
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(a[i][j]!=0) cnt1++; 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(b[i][j]!=0) cnt2++; 
        }
    }
    int triplet1[cnt1+1][3];
    int triplet2[cnt2+1][3];
    make_sparse(n,m,cnt1,triplet1,a);
    make_sparse(n,m,cnt2,triplet2,b);
    print_sparse(cnt1,triplet1);
    print_sparse(cnt2,triplet2);

}