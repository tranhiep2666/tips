#include <stdio.h>

int main() {
    int arr[100]; // Khai báo m?ng có 100 ph?n t?
    int n, value, position;

    // Yêu c?u ngu?i dùng nh?p vào s? ph?n t? mu?n nh?p
    printf("Nh?p s? ph?n t? mu?n nh?p (t?i da 100): ");
    scanf("%d", &n);

    // Yêu c?u ngu?i dùng nh?p t?ng ph?n t? vào m?ng
    printf("Nh?p các ph?n t?:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Yêu c?u ngu?i dùng nh?p giá tr? và v? trí mu?n thêm vào m?ng
    printf("Nh?p giá tr? mu?n thêm: ");
    scanf("%d", &value);
    printf("Nh?p v? trí mu?n thêm (1 d?n %d): ", n + 1);
    scanf("%d", &position);

    // Chèn giá tr? vào v? trí dã nh?p
    if (position >= 1 && position <= n + 1) {
        for (int i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = value;
        n++; // Tang so luong phan tu trong mang

        // In ra m?ng sau khi thêm
        printf("M?ng sau khi thêm: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("V? trí không h?p l?.\n");
    }

    return 0;
}

