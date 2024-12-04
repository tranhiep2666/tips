#include <stdio.h>

int main() {
    int arr[100]; // Khai báo m?ng có 100 ph?n t?
    int n, position;

    // Yêu c?u ngu?i dùng nh?p vào s? ph?n t? mu?n nh?p
    printf("Nh?p s? ph?n t? mu?n nh?p (t?i da 100): ");
    scanf("%d", &n);

    // Yêu c?u ngu?i dùng nh?p t?ng ph?n t? vào m?ng
    printf("Nh?p các ph?n t?:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Yêu c?u ngu?i dùng nh?p vi tri can xóa
    printf("Nh?p v? trí c?n xóa (1 d?n %d): ", n);
    scanf("%d", &position);

    // Ki?m tra tính h?p l? c?a v? trí và th?c hi?n xóa ph?n t?
    if (position >= 1 && position <= n) {
        for (int i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Gi?m s? lu?ng ph?n t? trong m?ng

        // In ra m?ng sau khi xóa
        printf("M?ng sau khi xóa: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("V? trí không h?p l?.\n");
    }

    return 0;
}

