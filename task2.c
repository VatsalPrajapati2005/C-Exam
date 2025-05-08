#include<stdio.h>

int main(){

    int arr[5];
    printf("Enter array elements :");

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("The Largest Element is %d",max);
    return 0;
}