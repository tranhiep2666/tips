#include <stdio.h>

int main() {
    // Khai báo và gán giá tr? cho m?t m?ng b?t k?
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // In ra m?ng ban d?u
    printf("M?ng ban d?u: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Yêu c?u ngu?i dùng nh?p vào v? trí can sua và giá tr? m?i
    int position, newValue;
    printf("Nh?p v? trí can sua (1 d?n %d): ", n);
    scanf("%d", &position);
    printf("Nh?p giá tr? m?i: ");
    scanf("%d", &newValue);

    // Ki?m tra tính h?p l? c?a v? trí và ti?n hành ghi dè giá tr? cu
    if (position >= 1 && position <= n) {
        arr[position - 1] = newValue;

        // In ra m?ng sau khi s?a
        printf("M?ng sau khi s?a: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("V? trí không h?p l?.\n");
    }

    return 0;
}

