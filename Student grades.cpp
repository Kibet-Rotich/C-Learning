#include <iostream>
#include <map>
using namespace std;

int main(){
    //ask user for next step
    map< string,int> scores;
    while(true){
        int input;
        cout<<"choose one option"<<endl;
        cout<<"1. Add student"<<endl;
        cout<<"2. Update Score"<<endl;
        cout<<"3. Display all students "<<endl;
        cout<<"4. Get student score"<<endl;
        cout<<"0. Exit"<<endl;

        if(!(cin>>input)){
            break;
        }
        if(input ==0){
            break;
        }
        if(input==1){
                string name;
                int score;
                cout<<"Enter student name: ";
                cin>>name;
                cout<<"Enter scores for "<<name<<" ";
                cin>>score;

                scores[name]=score;
                continue;
        }
        if(input==2){
            string name;
            int score;
            cout<<"Enter student name: ";
            cin>>name;
            cout<<"Enter new score for "<<name<<" ";
            cin>>score;
            for (auto &p : scores){
                if (p.first == name){
                         p.second = score;

                }

            }
            continue;

        }
        if(input==3){
            for(auto p :scores){
                cout<<p.first<< " "<<p.second<<endl;

            }
            continue;
        }
        if(input==4){
            string name;
            cout<<"Enter student name: ";
            cin>>name;
            cout<<scores[name];


                }

        }

    }
}
