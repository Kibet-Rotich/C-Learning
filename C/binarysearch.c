#include <stdio.h>

int binarysearch(int *arr,int size, int x){
int l = 0, r = size-1;
while(l<=r){
int mid = l + (r-l)/2;
if(arr[mid] == x){
return mid;
}else if(arr[mid]<x){
l = mid+1;
}else if(arr[mid]>x){
r = mid -1;
}
}
return -1;
}

int recursivebinsearch(int *arr,int l,int r, int size, int x){

int mid = l + (r-l)/2;
if(l>r){
return -1;
}
if(arr[mid] == x){
return mid;
}
else if( arr[mid] > x){
return recursivebinsearch(arr,l,mid-1,size,x);
}else{
return recursivebinsearch(arr,mid+1,l,size,x);
}
}





int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int result = recursivebinsearch(arr,0,n-1,5,x);
    if(result == -1){
        printf("Element not found in the array");
    }
    else{
        printf("Element found at index: %d", result);
    }
    return 0;
}
