#include <stdio.h>

int main() {
    int arr[5] = {4, 31, 42, 98, 512};
    
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr[i] += 2;
        }
    }

    printf("Mang sau khi thay doi:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    

    return 0;
}