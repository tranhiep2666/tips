#include <stdio.h>
int main() {
    // Kh?i t?o và gán giá tr? cho m?ng s? nguyên b?t k?
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 22, 12, 25};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên b?t k?
    int x;
    printf("Nh?p s? nguyên c?n tìm: ");
    scanf("%d", &x);

    // T?o m?ng d? luu các v? trí tìm du?c
    int positions[n];
    int count = 0;

    // S? d?ng thu?t toán tìm ki?m tuy?n tính d? tìm v? trí c?a ph?n t? dó
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[count] = i;
            count++;
        }
    }

    // In ra các v? trí tìm du?c
    if (count > 0) {
        printf("Ph?n t? %d du?c tìm th?y t?i các v? trí: ", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Ph?n t? %d không du?c tìm th?y trong m?ng.\n", x);
    }

    return 0;
}

