#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        // Check if the current element matches the target
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int data[] = {12, 45, 2, 8, 33, 70, 5};
    int size = sizeof(data) / sizeof(data[0]); // Calculate number of elements
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = linearSearch(data, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}