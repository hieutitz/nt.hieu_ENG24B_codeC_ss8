#include <stdio.h>

int main() {
    int arr[] = {1, 5, 2, 3, 23, 5, 1, 2};
    int maxCount = 0, soxuat_hien_nhieu_nhat;
    for (int i = 0; i < 8; i++) {
        int count = 0;
        for (int j = 0; j < 8; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            soxuat_hien_nhieu_nhat = arr[i];
        }
    }
    printf("so xuat hien nhieu nhat trong mang la %d\n", soxuat_hien_nhieu_nhat);

    return 0;
}

