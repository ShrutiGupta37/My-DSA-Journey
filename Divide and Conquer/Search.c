//Write a code that returns true if the value is in the array

#include<stdio.h>
#include<stdbool.h>

bool Search(int A[],int l,int r,int value){
    if(l==r){                   //Base case (if only one element in the array)
        if(A[l]==value)
            return true;
        return false;
    }
    else{
        int mid=(l+r)/2;
        return (Search(A,0,mid,value) || Search(A,mid+1,r,value));

    }

    
}

int main(){
    int A[5]={2,4,9,1,6};
    int value=14;
    bool x=Search(A, 0, 4, value);

    if (x)
        printf("Value found in the array\n");
    else
        printf("Value not found in the array\n");
}