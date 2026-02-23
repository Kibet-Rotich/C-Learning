#include <stdio.h>

int main(int argc, char* argv[]) {
    int arr[] = {20,30,40,34,65,73,76};

    //since  *(arr+idx) = arr[idx]
    // *(idx+arr) = idx[arr]

    printf("%d \n", arr[2]);
    printf("%d", 2[arr]);//Interesting

    return 0;
}
