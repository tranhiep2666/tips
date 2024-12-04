#include <stdio.h>
int main(){
    // Kh?i t?o và gán giá tr? cho m?ng s? nguyên b?t k?
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // S? d?ng thu?t toán s?p x?p n?i b?t (bubble sort) d? s?p x?p m?ng
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

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên b?t k?
    int x;
    printf("Nh?p s? nguyên c?n tìm: ");
    scanf("%d", &x);

    // S? d?ng thu?t toán tìm ki?m nh? phân (binary search) d? tìm v? trí c?a ph?n t? dó
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

    // In ra k?t qu? tìm ki?m
    if (result != -1) {
        printf("Ph?n t? %d du?c tìm th?y t?i v? trí %d.\n", x, result);
    } else {
        printf("Ph?n t? %d không du?c tìm th?y trong m?ng.\n", x);
    }

    return 0;
}

