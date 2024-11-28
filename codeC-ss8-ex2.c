#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int input, i;

    scanf("%d", &input);

    for (i = 0; i < size; i++) {
        if (arr[i] == input) {
            printf("%d\n", i);
            break;
        }
    }

    if (i == size) {
        printf("Khong ton tai\n");
    }

    return 0;
}

