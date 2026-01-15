#include<iostream>


using namespace std;

int fibonacci(int x){
    if(x<0){
        return -1;
    }
    if(x<=1){
        return x;
    }

    return fibonacci(x-1)+fibonacci(x-2);

}

int fib(int x){
    if(x<=1){
        return x;
    }

    int next = 0, curr = 1,prev = 0, i = 2;

    while(i<=x){

       next = curr +prev;
       prev = curr;
       curr = next;

        i++;
    }
    return curr;

}


int main(){
    cout<<fib(35)<<endl;
    //cout<<fibonacci(35)<<endl;
}


