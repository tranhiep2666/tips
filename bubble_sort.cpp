#include <stdio.h>
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    printf("Mang ban dau: ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for(int i=0;i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

