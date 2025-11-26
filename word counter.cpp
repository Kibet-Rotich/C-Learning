#include <iostream>
#include <unordered_map>
#include<string>
#include<sstream>
using namespace std;

int main(){

    unordered_map<string,int> wordcount;

    string text;
    cout<<"Enter a sentence: ";
    getline(cin,text);

    stringstream ss(text);
    string word;

    while(ss>>word){
        wordcount[word]++;
    }

    cout<<"Words and their count"<<endl;

    for(auto p: wordcount){
        cout<<p.first<<" : "<<p.second<<endl;
    }

}
