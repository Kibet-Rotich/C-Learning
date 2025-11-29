#include<iostream>

using namespace std;

int main(){
    //task 6
    int num;
    cout<<"Enter array size: ";
    cin>>num;

    int* arr = new int[num];

    for(int i = 0;i<num;i++){
            cout<<"Enter array["<<i<<"] size: ";
            cin>>*(arr+i);

    }
    for(int i = 0; i<num; i++){
        cout<<arr[i]<<endl;
    }
    //task 7
    int* maxptr = arr;

    for(int i = 0; i<num; i++){
        if(*(arr + i) > *maxptr){
            maxptr = arr+i;
        }
    }
    cout<<"the max value is "<<*maxptr<<endl;

    delete[] arr;
    arr = nullptr;




}
