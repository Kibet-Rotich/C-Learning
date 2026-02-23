#include<iostream>
using namespace std;

int add(int a, int b){ return a+b; }
int subtract(int a,int b){ return a-b; }
int multiply(int a,int b){ return a*b; }
int divide(int a,int b){ return b != 0 ? a/b : 0; } // safeguard

int compute(int a,int b, int (*op)(int,int)){
    return op(a,b);
}

int main(){
    int (*ops[4])(int, int) = { add, subtract, multiply, divide };

    int a,b,opera;
    cout<<"Enter first num: ";
    cin>>a;

    cout<<"Enter second num: ";
    cin>>b;

    cout<<"Enter operator: 0=add, 1=subtract, 2=multiply, 3=divide: ";
    cin>>opera;

    if(opera < 0 || opera > 3){
        cout<<"Invalid choice"<<endl;
        return 0;
    }

    if(opera == 3 && b==0){
        cout<<"Cannot divide by zero"<<endl;
        return 0;
    }

    cout<<"Result: "<<compute(a,b,ops[opera])<<endl;
}
