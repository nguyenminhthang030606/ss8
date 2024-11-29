#include <stdio.h>

int main() {
    int hang = 3, cot = 4;
    int mang[3][4] = {
        {2, 4, 6, 8},
        {1, 3, 9, 7},
        {5, 8, 7, 5}
    };
    
    int tong = 0;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                tong = tong + mang[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", tong);

    return 0;
}
