#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[i][0];
        sum += arr[i][2];
    }
    for (int j = 0; j < 3; j++) {
        sum += arr[0][j];
        sum += arr[2][j];
    }
    sum -= arr[0][0];
    sum -= arr[0][2];
    sum -= arr[2][0];
    sum -= arr[2][2];
    printf("%d\n", sum);

    return 0;
}

