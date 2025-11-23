#include <iostream>

double add(int a,int b);
double subtract(int a,int b);
double divide(int a,int b);
double multiply(int a,int b);

int main(int argc, char* argv[]) {
    using namespace std;
    int num1;
    int num2;
    char operato;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>operato;
    cout<<"Enter the second number: ";
    cin>>num2;

    if (operato == '+'){
        cout<<"The answer is: "<<add(num1,num2)<<endl;
    }else if (operato == '-'){
        cout<<"The answer is: "<<subtract(num1,num2)<<endl;

    }else if(operato == '/'){
        cout<<"The answer is: "<<divide(num1,num2)<<endl;
    }else if(operato == '/'){
        cout<<"The answer is: "<<multiply(num1,num2)<<endl;
    }else{
        cout<<"Invalid operator"<<endl;
    }
    return 0;
}
double add(int a,int b){
    return a+b;
}


double subtract(int a,int b){
    return a-b;
}

double multiply(int a,int b){
    return a*b;

}
double divide(int a,int b){
    if (b == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
        } else {
            return a/b;
        }

}
