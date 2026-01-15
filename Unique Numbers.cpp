#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> nums;
    for(int i = 0;i<10;i++){
        int num;
        cout<<"Enter Number: ";
        cin>>num;
        nums.insert(num);

    }

    for(int x : nums){
        cout<<x<<endl;
    }

    return 0;
}
