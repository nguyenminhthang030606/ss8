#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen : ");
    scanf("%d", &n);

    int array[n][n];
    int value = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = value++; 
        }
    }

    printf("Ma tran vuong tu dong khoi tao là:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

