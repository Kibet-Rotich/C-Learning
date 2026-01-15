#include<iostream>
#include<memory>
using namespace std;

int main()
{
    auto ptr = make_unique<int>(10);
    auto sharedptr = make_shared<int>(20);

    cout<<*ptr<<" " <<*sharedptr<<endl; // gives the location of the unique pointer object
    cout<<&ptr<<" " <<&sharedptr<<endl;

    cout<<ptr.get()<<endl; // gives the location of the actual value ptr points to
    cout<<sharedptr.get();

    int size = 10;

    int arr = make_unique<int>(new int(size))


}
