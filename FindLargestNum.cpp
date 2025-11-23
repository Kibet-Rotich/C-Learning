#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter N (Size of array): "<<endl;
    cin>>n;
    if (n<=0){
            cout<<"Invalid size"<<endl;
            return 0;

    }


    vector<int> arr(n);
    for(int i = 0;i<n;i++){
            cout<<"Enter Number "<<i+1<<" : "<<endl;
            cin>>arr[i];

    }
    int maximum = arr[0];
    for(int j =0;j<n;j++){
        if (arr[j]>maximum){
            maximum = arr[j];
    }
    }
    cout<<"Maximum value = "<<maximum<<endl;

    return 0;
}
