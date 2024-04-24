#include <stdio.h>

#define MAX_SIZE 100

// Function to convert a sparse matrix to its triplet representation
void convertToTriplet(int sparse_matrix[][MAX_SIZE], int rows, int cols, int triplets[][3], int *num_triplets) {
    *num_triplets = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (sparse_matrix[i][j] != 0) {
                triplets[*num_triplets][0] = i;
                triplets[*num_triplets][1] = j;
                triplets[*num_triplets][2] = sparse_matrix[i][j];
                (*num_triplets)++;
            }
        }
    }
}

// Function to display the triplet representation
void displayTriplets(int triplets[][3], int num_triplets) {
    printf("Triplet representation:\n");
    for (int i = 0; i < num_triplets; i++) {
        printf("(%d, %d, %d)\n", triplets[i][0], triplets[i][1], triplets[i][2]);
    }
}

int main() {
    int sparse_matrix[3][3] = {
        {0, 0, 3},
        {0, 0, 0},
        {0, 0, 0}
    };

    int rows = 3;
    int cols = 3;
    int triplets[MAX_SIZE][3];
    int num_triplets;

    convertToTriplet(sparse_matrix, rows, cols, triplets, &num_triplets);
    displayTriplets(triplets, num_triplets);

    return 0;
} 
