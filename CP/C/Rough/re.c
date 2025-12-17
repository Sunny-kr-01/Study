#include <stdio.h>
#include <math.h>

void printsubset(int arr[],int n)
{
    int sub = pow(2,n);
    for(int i=0;i<sub;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                printf("%d ",arr[j]);
            }
        }
        printf("\n");
    }
    printf("{0}");
}

int main() {
    int arr[3] = {1,2,3};
    printsubset(arr,3);
    return 0;
}
