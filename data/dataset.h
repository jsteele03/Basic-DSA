#pragma once

struct Dataset {
    int array[10]; // fixed size array
    int size;      // actual size of the array
};

// Function to load example data
Dataset loadDataset();
