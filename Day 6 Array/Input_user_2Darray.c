#include<stdio.h>
int main(){

    int rs = 3;
    int cs = 3;
    
    //Declaring a second 2D array for user input
    int mat2[3][3];
    
    // Taking input from the user for matrix 2
    printf("Enter elements for Matrix 2:\n");
    for (int i = 0; i < rs; i++) {
        for (int j = 0; j < cs; j++) {
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Printing the second matrix
    printf("Matrix 2:\n");
    for (int i = 0; i < rs; i++) {
        for (int j = 0; j < cs; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n"); // create a newline after each row
    }

    return 0;
}