#include<iostream>

using namespace std;

int main()
{
    for(int i = 0; i<100; i++){
        if(i&1 == 0){
            cout<<"Even"<<endl;
        }else{
            cout<<"Odd"<<endl;
        }
    }



}
