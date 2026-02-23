#include<iostream>
using namespace std;

int main(){
    int inputsize;
    cout<<"Enter array size: ";
    cin>>inputsize;
    int* arr = new int[inputsize];
    for(int i =0;i<inputsize;i++){
        cout<<"Enter array["<<i<<"] value: ";
        cin>>*(arr+i);
    }
    int newinputsize;
    cout<<"Enter new array size: ";
    cin>>newinputsize;
    int* arr2 = new int[newinputsize];
    if(newinputsize<=inputsize){
        cout<<"New array size should be greater than initial array size"<<endl;
        return 0;
    }

    for(int i =0;i<inputsize;i++){
        *(arr2+i) = *(arr+i);
    }
    for(int i =inputsize;i<newinputsize;i++){
        cout<<"Enter array["<<i<<"] value: ";
        cin>>*(arr2+i);
    }

    for(int i =0;i<newinputsize;i++){
        cout<<*(arr2+i)<<" , ";

    }

}
