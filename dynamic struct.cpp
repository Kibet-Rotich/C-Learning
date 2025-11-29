#include<iostream>

using namespace std;

struct Studentscore{
    string name;
    int score;
};

int main(){
    int inputsize;
    cout<<"Enter student size: ";
    cin>>inputsize;

    Studentscore* studentarr = new Studentscore[inputsize];
    for(int i =0;i<inputsize;i++){
        string name;
        int score;

        cout<<"Enter student["<<i<<"] name: ";
        cin>>name;
        cout<<"Enter student["<<i<<"] score: ";
        cin>>score;
        Studentscore s = {name,score};
        *(studentarr+i) = s;
    }

    for(int i = 0; i < inputsize; i++){
    cout << studentarr[i].name << " , " << studentarr[i].score << endl;
}
delete[] studentarr;

}

/*
int main(){

    string name;
    int score;

    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter student score: ";
    cin>>score;

    Studentscore* S = new Studentscore;

    S->name = name;
    S->score = score;


    cout<<S->name<<" , "<<S->score;

    delete S;




}*/

