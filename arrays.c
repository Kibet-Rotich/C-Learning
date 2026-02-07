#include<stdio.h>

void sortarray(int *arr, int size) {
    // Simple bubble sort implementation
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                // Swap the elements
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[5] = {5, 2, 9, 1, 5};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Array elements using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // Accessing array elements using pointer arithmetic
    }
    printf("\n");


    sortarray(ptr,sizeof(arr)/sizeof(arr[0])); // Sorting the array using pointer
    printf("Array elements using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // Accessing array elements using pointer arithmetic
    }
    printf("\n");

    return 0;
}