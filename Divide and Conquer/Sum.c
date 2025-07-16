#include<stdio.h>
int sum(int A[],int l,int r){
    if(l==r)
        return A[l];
    
    return (A[l]+sum(A,l+1,r));
}

int main(){
    int A[5]={2,4,0,0,6};

    int x=sum(A,0,4);
    printf("Sum = %d",x);
    return 0;
}