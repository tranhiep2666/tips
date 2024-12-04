#include <stdio.h>
int main(){
    // Kh?i t?o v� g�n gi� tr? cho m?ng s? nguy�n b?t k?
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // S? d?ng thu?t to�n s?p x?p n?i b?t (bubble sort) d? s?p x?p m?ng
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // In ra m?ng sau khi s?p x?p
    printf("M?ng sau khi s?p x?p: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n b?t k?
    int x;
    printf("Nh?p s? nguy�n c?n t�m: ");
    scanf("%d", &x);

    // S? d?ng thu?t to�n t�m ki?m nh? ph�n (binary search) d? t�m v? tr� c?a ph?n t? d�
    int l = 0, r = n - 1, result = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x) {
            result = m;
            break;
        }
        if (arr[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    // In ra k?t qu? t�m ki?m
    if (result != -1) {
        printf("Ph?n t? %d du?c t�m th?y t?i v? tr� %d.\n", x, result);
    } else {
        printf("Ph?n t? %d kh�ng du?c t�m th?y trong m?ng.\n", x);
    }

    return 0;
}

