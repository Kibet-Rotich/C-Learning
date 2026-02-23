#include<iostream>

using namespace std;

void swapvalues(int* a, int* b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }

void reversearray(int* arr, int size){
    int* first = arr;
    int* last = arr+size-1;
    while(first<last){
        swapvalues(first,last);
        first++;
        last = last -1;
    }

}

int main(){
    //task 1
    int arr[5] = {1, 2, 3, 4, 5};
    int* p = arr;

    for(int i = 0; i<=4; i++){
        cout<<*(p+i)<<endl;
    }

    //task 2

    reversearray(p,5);

    for(int i = 0; i<=4; i++){
        cout<<arr[i]<<endl;
    }



}
