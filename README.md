//binary search concept in C++

#include <iostream>
#include <vector>

// Function to perform binary search
int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;              // Initialize the left boundary of the search range
    int right = arr.size() - 1; // Initialize the right boundary of the search range

    while (left <= right) { // Repeat until the search range is valid
        int mid = left + (right - left) / 2; // Calculate the middle index

        if (arr[mid] == target) {
            return mid; // Element found, return its index
        } else if (arr[mid] < target) {
            left = mid + 1; // Update the left boundary if the target is in the right half
        } else {
            right = mid - 1; // Update the right boundary if the target is in the left half
        }
    }

    return -1; // Element not found
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    int result = binarySearch(arr, target);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
