#include <stdio.h>

int main() {
    int n = 3;  
    int magic[3][3] = {0};

    int i = 0, j = n / 2;

    for (int num = 1; num <= n * n; num++) {
        magic[i][j] = num;

        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;

        if (magic[newi][newj] != 0) {
            i = (i + 1) % n;  // go down
        } else {
            i = newi;
            j = newj;
        }
    }

    printf("Magic Square of size 3:\n");
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            printf("%3d ", magic[r][c]);
        }
        printf("\n");
    }
    return 0;
}