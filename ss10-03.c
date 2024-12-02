#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Nhap cac phan tu: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++) {
        int key = arr[i];  
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Mang sau khi sap xep la: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
