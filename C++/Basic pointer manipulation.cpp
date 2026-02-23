#include<iostream>

using namespace std;

void swapvalues(int* a, int* b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }

int main(){
// task 1
    int age = 20;
    int* ageptr = &age;

    cout<<ageptr<<endl;
    cout<<*ageptr<<endl;

//task 2
    int a = 5;
    int* aptr = &a;

    *aptr = 99;
    cout<<a<<endl;
//task3


    cout<<"a = "<<a<<" age = "<<age<<endl;
    swapvalues(aptr,ageptr);
    cout<<"a = "<<a<<" age = "<<age<<endl;

}
