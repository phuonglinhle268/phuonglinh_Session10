#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    int found = 0;  
    printf("Phan tu %d tim thay tai cac vi tri: ", x);  
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d ", i);  
            found = 1;  
        }
    }
    if (!found) {
        printf("Khong co phan tu %d.\n", x);
    } else {
        printf("\n");
    }

    return 0;
}
