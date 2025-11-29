#include<iostream>


int main(){
    using namespace std;



/*  References
    string food = "Rice";
    string &meal = food; //meal hear is a reference variable(meaning it points to the same mem address as the food variable)
    //a change to a reference variable will change the original variable

    cout<<food<<endl;
    cout<<meal<<endl;

    meal = "Ugali";

    cout<<food<<endl;
    cout<<meal<<endl;
    */

    string food = "rice";
    cout<<&food<<" Prints out the address of food variable"<<endl;
    string* foodpointer = &food;
    cout<<foodpointer<<" Prints out the address of food variable"<<endl;

    // you can use * to dereference (get your actual variable value from a pointer)
    cout<<*foodpointer<<endl;
    *foodpointer = "Ugali"; // you can use the pointer to change the value it points to
    cout<<*foodpointer<<endl;
    cout<<food<<endl;
}


