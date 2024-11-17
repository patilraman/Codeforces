#include <iostream>
#include <vector>

int main() {
    // Define dimensions for the 2D array
    int rows = 3;
    int cols = 4;

    // Create a 2D vector with all elements initialized to 0
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols, 0));

    // Fill the matrix with values
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = (i + 1) * (j + 1); // Example value
        }
    }

    // Print the matrix
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
