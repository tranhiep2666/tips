#include <stdio.h>

int main() {
    int arr[100]; // Khai b�o m?ng c� 100 ph?n t?
    int n, position;

    // Y�u c?u ngu?i d�ng nh?p v�o s? ph?n t? mu?n nh?p
    printf("Nh?p s? ph?n t? mu?n nh?p (t?i da 100): ");
    scanf("%d", &n);

    // Y�u c?u ngu?i d�ng nh?p t?ng ph?n t? v�o m?ng
    printf("Nh?p c�c ph?n t?:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Y�u c?u ngu?i d�ng nh?p vi tri can x�a
    printf("Nh?p v? tr� c?n x�a (1 d?n %d): ", n);
    scanf("%d", &position);

    // Ki?m tra t�nh h?p l? c?a v? tr� v� th?c hi?n x�a ph?n t?
    if (position >= 1 && position <= n) {
        for (int i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Gi?m s? lu?ng ph?n t? trong m?ng

        // In ra m?ng sau khi x�a
        printf("M?ng sau khi x�a: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("V? tr� kh�ng h?p l?.\n");
    }

    return 0;
}

