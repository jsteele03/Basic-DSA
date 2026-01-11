#include "dataset.h"

Dataset loadDataset() {
    Dataset d;

    // Array data
    d.array = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    // Graph data
    d.graph = {
        {0, {1, 2}},
        {1, {0, 3, 4}},
        {2, {0, 5}},
        {3, {1}},
        {4, {1}},
        {5, {2}}
    };

    return d;
}
