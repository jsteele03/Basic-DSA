#include "dataset.h"

// Fill the dataset with example numbers
Dataset loadDataset() {
    Dataset d;

    // Array data
    int temp[10] = {1, 3, 5, 7, 9, 10, 11, 15, 17, 19};
    for (int i = 0; i < 10; i++) {
        d.array[i] = temp[i];
    }
    d.size = 10;

    return d;
}
