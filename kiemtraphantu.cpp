#include <stdio.h>
int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element;
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d",&element);
    int found=0;
    for (int i=0;i<size;i++) {
        if(arr[i]==element){
            printf("Phan tu %d co ton tai trong mang tai vi tri %d\n",element,i);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Phan tu %d khong ton tai trong mang\n",element);
    }
    return 0;
}

