#include <stdio.h>
int main() {
    // Kh?i t?o v� g�n gi� tr? cho m?ng s? nguy�n b?t k?
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 22, 12, 25};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n b?t k?
    int x;
    printf("Nh?p s? nguy�n c?n t�m: ");
    scanf("%d", &x);

    // T?o m?ng d? luu c�c v? tr� t�m du?c
    int positions[n];
    int count = 0;

    // S? d?ng thu?t to�n t�m ki?m tuy?n t�nh d? t�m v? tr� c?a ph?n t? d�
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[count] = i;
            count++;
        }
    }

    // In ra c�c v? tr� t�m du?c
    if (count > 0) {
        printf("Ph?n t? %d du?c t�m th?y t?i c�c v? tr�: ", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Ph?n t? %d kh�ng du?c t�m th?y trong m?ng.\n", x);
    }

    return 0;
}

