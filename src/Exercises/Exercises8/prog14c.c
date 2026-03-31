#include <stdio.h>
int matrix2[5][4];
int matrix1[4][5] = {
    {1, 2, 3, 4, 5},
    {5, 6, 7, 8, 9},
    {10, 11, 12, 13, 14},
    {15, 16, 17, 18, 19}
};
int cells = 4; 
int colls = 5;
void transposeMatrix() {
    int tmp;
    for (int i = 0; i < cells; i++) {
        for (int j = 0; j < colls; j++) {
            matrix2[j][i] = matrix1[i][j];
        }
    }
}

int main(void) {

    transposeMatrix();

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%i ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}