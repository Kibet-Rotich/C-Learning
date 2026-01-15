#include <iostream>

using namespace std;

struct MyVector{
    int* data;
    int size;
    int capacity;
};


void init(MyVector& v){
    v.size = 0;
    v.capacity = 2;
    v.data = new int[v.capacity];
}

void push_back(MyVector& v, int value){
    if (v.size == v.capacity){
        int newcap= v.capacity*2;
        int* newdata = new int[newcap];
        for(int i = 0;i<v.capacity;i++){
                newdata[i] = v.data[i];

        }

        delete[] v.data;
        v.data = newdata;
        v.capacity = newcap;
    }

    v.data[v.size] = value;
    v.size++;


}

void print(MyVector& v){
    for(int i = 0;i<v.size;i++){
        cout<<v.data[i]<<" ";
    }
}

void free(MyVector& v){
    delete[] v.data;

    v.data = nullptr;
    v.size = 0;
    v.capacity = 0;
}

int main(){
    MyVector v;
    init(v);

    push_back(v, 10);
    push_back(v, 20);
    push_back(v, 30);
    push_back(v, 40);
    push_back(v, 50);

    print(v);

    free(v);

    print(v);

    return 0;
}
