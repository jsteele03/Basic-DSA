// int binary_search(int arr[], int size, int desired_number) {
//     int left = 0;
//     int right = size - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2; 
//         if (desired_number == arr[mid]) {
//             return mid;
//         }
//         else if (desired_number > arr[mid]){
//             left = mid + 1;
//         }
//         else if (desired_number < arr[mid]) {
//             right = mid - 1;
//         }
//     }
//     return -1;
// }

// int binary_search(int arr[], int size, int desired_number) {
//     int left = 0;
//     int right = size -1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
        
//         if (arr[mid] == desired_number) {
//             return mid;
//         }
//         else if (desired_number > arr[mid]) {
//             left = mid + 1;
//         }
//         else if (desired_number < arr[mid]) {
//             right = mid - 1;
//         }
//     }
//     return -1;
// }

// int binary_search(int arr[], int size, int desired_number){
//     int left = 0;
//     int right = size -1;
//     while (left <= right) {
//         // dynamically set middle index

//         int mid = left + (right - left) / 2;

//         // return the answer index when found
//         if (arr[mid] == desired_number) {
//             return mid;
//         }
//         // chop off left half
//         else if (arr[mid] < desired_number) {
//             left = mid + 1;
//         }
//         // chop off right half
//         else if (arr[mid] > desired_number) {
//             right = mid - 1;
//         }
//     }
//     // the desired number was not in the array
//     return - 1;
// } 


int binary_search(int arr[], int size, int desired_number) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (left - right) / 2;
        if (arr[mid] == desired_number) {
            return mid;
        }
        else if (arr[mid] < desired_number) {
            left = mid + 1;
        }
        else if (arr[mid] > desired_number) {
            right = mid - 1;
        }
    }
    return -1;
}
