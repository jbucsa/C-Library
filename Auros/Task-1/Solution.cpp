#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> &A) {
    struct Cell {
        int index, excess;
    };

    vector<Cell> excess_cells, deficit_cells;
    int moves = 0;

    // Flatten 3x3 grid into a 1D array and track excess/deficit positions
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int index = i * 3 + j;  // Convert 2D index to 1D
            int excess = A[i][j] - 1;

            if (excess > 0) {
                excess_cells.push_back({index, excess});
            } else if (excess < 0) {
                deficit_cells.push_back({index, -excess});
            }
        }
    }

    // Two-pointer approach to optimally pair excess with deficit
    size_t i = 0, j = 0;
    while (i < excess_cells.size() && j < deficit_cells.size()) {
        int transfer = min(excess_cells[i].excess, deficit_cells[j].excess);

        // Calculate Manhattan distance for movement
        int row1 = excess_cells[i].index / 3, col1 = excess_cells[i].index % 3;
        int row2 = deficit_cells[j].index / 3, col2 = deficit_cells[j].index % 3;
        moves += transfer * (abs(row1 - row2) + abs(col1 - col2));

        // Update remaining excess/deficit
        excess_cells[i].excess -= transfer;
        deficit_cells[j].excess -= transfer;

        if (excess_cells[i].excess == 0) i++;
        if (deficit_cells[j].excess == 0) j++;
    }

    return moves;
}
