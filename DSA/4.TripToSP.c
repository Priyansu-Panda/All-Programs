#include <stdio.h>

#define MAX_SIZE 100

// Function to convert a triplet representation to a sparse matrix
void convertToSparseMatrix(int triplets[][3], int num_triplets, int sparse_matrix[][MAX_SIZE], int rows, int cols) {
    // Initialize sparse matrix to all zeroes
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sparse_matrix[i][j] = 0;
        }
    }

    // Fill sparse matrix using triplets
    for (int i = 0; i < num_triplets; i++) {
        int row = triplets[i][0];
        int col = triplets[i][1];
        int value = triplets[i][2];
        sparse_matrix[row][col] = value;
    }
}

// Function to display the sparse matrix
void displaySparseMatrix(int sparse_matrix[][MAX_SIZE], int rows, int cols) {
    printf("Sparse matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sparse_matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int triplets[5][3] = {
        {0, 0, 3},
        {0, 2, 4},
        {1, 0, 5},
        {2, 1, 6},
        {2, 2, 7}
    };

    int num_triplets = 5;
    int rows = 3;
    int cols = 3;
    int sparse_matrix[MAX_SIZE][MAX_SIZE];

    convertToSparseMatrix(triplets, num_triplets, sparse_matrix, rows, cols);
    displaySparseMatrix(sparse_matrix, rows, cols);

    return 0;
}