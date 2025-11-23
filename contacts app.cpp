#include <iostream>
#include <vector>
using namespace std;

class Contact{
public:
    string name;
    int phoneNumber;

    Contact(string n,int number){
        name = n;
        phoneNumber = number;
    }

};

int main(){

    vector<Contact> contacts;

    while(true){
        int input;
        cout<<"choose one option"<<endl;
        cout<<"1. Add contact"<<endl;
        cout<<"2. Search Contact"<<endl;
        cout<<"3. Remove contact "<<endl;
        cout<<"4. Display all contacts"<<endl;
        cout<<"0. Exit"<<endl;

        if(!(cin>>input)){
            break;
        }

        switch(input){
            case 1:{


                string name;
                int number;
                cout<<"Enter contact name: ";
                cin>>name;
                cout<<"Enter contact number: ";
                cin>>number;
                Contact contact(name,number);
                contacts.push_back(contact);
                break;
            }
            case 2:{
                string name;
                cout<<"Enter contact name: ";
                cin>>name;
                for(Contact& x : contacts){
                    if(x.name == name){
                        cout<<x.phoneNumber<<endl;
                    }
                }
                break;
            }
            case 3:{

                string name;
                cout<<"Enter contact name: ";
                cin>>name;
                for(auto it = contacts.begin(); it != contacts.end();){
                    if(it->name == name){
                        contacts.erase(it);
                    }else{
                        it++;

                    }
                }
                break;
            }
            case 4:{

                for(Contact x : contacts){
                    cout<<x.name<<" "<<x.phoneNumber<<endl;
                }
                break;
            }
            case 0:
                break;
            default:
                break;


        }
        continue;

    }
}
