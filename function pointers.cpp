#include<iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

int main()
{
  int (*fptr)(int a,int b);

  fptr = &add;

  cout<<(*fptr)(5,10);
}
