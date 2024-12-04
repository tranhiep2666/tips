#include <stdio.h>

int main() {
    int arr[100]; // Khai b�o m?ng c� 100 ph?n t?
    int n, value, position;

    // Y�u c?u ngu?i d�ng nh?p v�o s? ph?n t? mu?n nh?p
    printf("Nh?p s? ph?n t? mu?n nh?p (t?i da 100): ");
    scanf("%d", &n);

    // Y�u c?u ngu?i d�ng nh?p t?ng ph?n t? v�o m?ng
    printf("Nh?p c�c ph?n t?:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Y�u c?u ngu?i d�ng nh?p gi� tr? v� v? tr� mu?n th�m v�o m?ng
    printf("Nh?p gi� tr? mu?n th�m: ");
    scanf("%d", &value);
    printf("Nh?p v? tr� mu?n th�m (1 d?n %d): ", n + 1);
    scanf("%d", &position);

    // Ch�n gi� tr? v�o v? tr� d� nh?p
    if (position >= 1 && position <= n + 1) {
        for (int i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = value;
        n++; // Tang so luong phan tu trong mang

        // In ra m?ng sau khi th�m
        printf("M?ng sau khi th�m: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("V? tr� kh�ng h?p l?.\n");
    }

    return 0;
}

