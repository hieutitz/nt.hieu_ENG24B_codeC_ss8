#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][2 - i]);
        sum += arr[i][2 - i];
    }
    printf("\ntong cac phan tu tren duong cheo phu: %d\n", sum);

    return 0;
}

