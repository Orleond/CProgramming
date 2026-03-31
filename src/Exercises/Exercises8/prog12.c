#include <stdio.h>
void transposeMatrix(int matrix1[][5], int matrix2[][4], int cells, int colls) {
    int tmp;
    for (int i = 0; i < cells; i++) {
        for (int j = 0; j < colls; j++) {
            matrix2[j][i] = matrix1[i][j];
        }
    }
}

int main(void) {
    int matrix2[5][4];
    int matrix1[4][5] = {
        {1, 2, 3, 4, 5},
        {5, 6, 7, 8, 9},
        {10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19}
    };
    transposeMatrix(matrix1, matrix2, 4, 5);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%i ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}