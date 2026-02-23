#include<stdio.h>

int binarsearch(int arr[], int l, int r, int x) {
   while(l<r){
    int mid = l + (r-l)/2;
    if(arr[mid] == x){
        return mid;
   }
    if(arr[mid] < x){
     l = mid + 1;
    }
    else{
     r = mid - 1;
    }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int result = binarsearch(arr, 0, n - 1, x);
    if(result == -1){
        printf("Element not found in the array");
    }
    else{
        printf("Element found at index: %d", result);
    }
    return 0;
}