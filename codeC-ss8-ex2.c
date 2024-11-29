#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int input, i;

    scanf("%d", &input);

    for (i = 0; i < 5; i++) {
        if (arr[i] == input) {
            printf("%d\n", i);
            break;
        }
    }

    if (i == 5) {
        printf("Khong ton tai\n");
    }

    return 0;
}

