#include<stdio.h>

int max(int a,int b){
    if(a>b)
        return a;
    return b;
}

int maximum(int A[],int l,int r){
    if(l==r)            
        return A[l];        //if only one element in the array 
    int mid=(l+r)/2;
    return (max(maximum(A,0,mid),maximum(A,mid+1,r)));
}

int main(){
    int A[5]={2,4,9,1,6};

    int x=maximum(A,0,4);
    printf("Maximum = %d",x);
    return 0;
}