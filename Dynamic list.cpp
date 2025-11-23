#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums;
    int input;
    int i =0;
    while(true){
        cout<<"Enter a number: (enter -1 to stop) ";
        if(!(cin>>input)){
            break;
        }
        if(input == -1){
            break;
        }
        nums.push_back(input);

    }
    for(int x : nums){
        cout<<x<<',';
    }
}
