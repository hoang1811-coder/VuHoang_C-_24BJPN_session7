#include <stdio.h>

int main() {
    int arr[5] = {1, 8, 3, 6, 5};
    int sochan = 0;
    printf("Cac phan tu chan trong mang: ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            sochan = 1;
        
        }
    }

    if (!sochan) {
        printf("\nMang khong chua so chan");
    }

    printf("\n");

    return 0;
}
