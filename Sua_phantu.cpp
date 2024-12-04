#include <stdio.h>

int main() {
    // Khai b�o v� g�n gi� tr? cho m?t m?ng b?t k?
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // In ra m?ng ban d?u
    printf("M?ng ban d?u: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Y�u c?u ngu?i d�ng nh?p v�o v? tr� can sua v� gi� tr? m?i
    int position, newValue;
    printf("Nh?p v? tr� can sua (1 d?n %d): ", n);
    scanf("%d", &position);
    printf("Nh?p gi� tr? m?i: ");
    scanf("%d", &newValue);

    // Ki?m tra t�nh h?p l? c?a v? tr� v� ti?n h�nh ghi d� gi� tr? cu
    if (position >= 1 && position <= n) {
        arr[position - 1] = newValue;

        // In ra m?ng sau khi s?a
        printf("M?ng sau khi s?a: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("V? tr� kh�ng h?p l?.\n");
    }

    return 0;
}

