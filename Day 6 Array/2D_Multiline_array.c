#include <stdio.h>

int main() {
    int rs = 3;
    int cs = 3;

    // Correct initialization of 2D array
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Printing the first matrix
    printf("Matrix 1:\n");
    for (int i = 0; i < rs; i++) {
        for (int j = 0; j < cs; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n"); // create a newline after each row
    }
  

    //without using loop print the 2D matrix
    int mat1[4][4]={ 
        {1,2,3},
        {4,5,6},
        {7,8,9,},
        {1,2,3}
       
    };
    printf("Matrix:\n");

    printf("%d%d%d\n",mat1[0][0],mat1[0][1],mat1[0][2]);
    printf("%d%d%d\n",mat1[1][0],mat1[1][1],mat1[1][2]);
    printf("%d%d%d\n",mat1[2][0],mat1[2][1],mat1[2][2]);
    printf("%d%d%d\n",mat1[3][0],mat1[3][1],mat1[3][2]);

    return 0;
}
