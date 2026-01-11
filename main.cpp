#include "data/dataset.h"
#include "utils/print.h"
#include <iostream>

int binary_search(int arr[], int size, int desired_number);

int main() {
    Dataset data = loadDataset();

    int target = 11;
    int idx = binary_search(data.array, data.size, target);

    if (idx != -1)
        std::cout << "Found " << target << " at index " << idx << "\n";
    else
        std::cout << target << " not found.\n";

    return 0;
}
