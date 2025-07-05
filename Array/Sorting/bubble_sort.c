#include<stdio.h>
int main(){
    int A[5]={2,4,10,6,7};
    int temp,i,j;

    //bubble sort
    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }

    printf("Sorted Array : ");
    for(i=0;i<5;i++){
        printf(" %d",A[i]);
    }
    return 0;
   
}