#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    string text;
    cout<<"Enter a sentence: ";
    getline(cin,text);

    unordered_map<char,int> charactercount;

    for(int i=0;i<text.size();i++){
            charactercount[text[i]]++;

    }

    for(auto p : charactercount){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
