void safety() {
    pass();
}

void resource_request() {
    pass();
}

int main() {

    int n = 5; // Number of processes
    int m = 3; // Number of resource types

    // Available Vector (initially total resources available)
    int available[] = {3, 3, 2};

    // Maximum Matrix
    int max[5][3] = {
        {7, 5, 3},
        {3, 2, 2},
        {9, 0, 2},
        {2, 2, 2},
        {4, 3, 3}
    };

    // Allocation Matrix
    int allocation[5][3] = {
        {0, 1, 0},
        {2, 0, 0},
        {3, 0, 2},
        {2, 1, 1},
        {0, 0, 2}
    };

    // Need Matrix (Max - Allocation)
    int need[5][3] = {
        {7, 4, 3},
        {1, 2, 2},
        {6, 0, 0},
        {0, 1, 1},
        {4, 3, 1}
    };

    return 0;
}