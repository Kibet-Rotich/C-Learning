#include <iostream>

using namespace std;

double square(int a){
    return a*a;
}

int main(){
    int upper;
    cout<<"Enter upper bound: ";
    cin>>upper;

    for(int i = 1;i<=upper;i++){
        cout<<"Number: "<<i<<" Square: " <<square(i)<<endl;
    }
    return 0;
}
