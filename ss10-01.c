#include <stdio.h>

int main() {
    int n, number, i, found = 0;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Nhap cac phan tu:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d tim thay tai vi tri %d.\n", x, i);
            found = 1;  
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay phan tu %d.\n", x);
    }

    return 0;
}
