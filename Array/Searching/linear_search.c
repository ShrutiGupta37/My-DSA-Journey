#include<stdio.h>
int main(){
    int x,i,A[5],n;
    int flag=0;
    printf("Enter Elements: ");

    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter Element to be search: ");
    scanf("%d",&x);


    for(i=0;i<5;i++){
        if(A[i]==x){
            flag=1;
            n=i;
            break;
        }
    }

    if(flag==1){
        printf("Element found at index %d ",n);
    }
    else{
        printf("Element not found");
    }

    return 0;
}