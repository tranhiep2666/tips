#include <stdio.h>
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++){
        int min_idx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        int temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
    printf("Mang sau khi sap xep: ");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

