#include <stdio.h>

int binary(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2; 
        if (arr[mid] == x) return mid;  
        if (arr[mid] < x) low = mid + 1;  
        else high = mid - 1;  
    }
    
    return -1;  
}
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
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    int result = binary(arr, n, x);
    
    if (result != -1) {
        printf("Phan tu %d tim thay tai vi tri %d.\n", x, result);
    } else {
        printf("Khong tim thay phan tu %d.\n", x);
    }

    return 0;
}
