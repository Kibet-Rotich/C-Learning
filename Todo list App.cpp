#include<iostream>
#include<vector>

using namespace std;



class Todo{
public:

    int id;
    string title;
    bool completed;

 /*   Todo(int taskid,string task){
        id = taskid;
        title = task;
        completed = false;
    } */
    Todo(int id, string title): id(id),title(title), completed(false){}


};
vector<Todo> tasks;

void addTask(string task){
    int id = tasks.size()+1;
    Todo newtask(id,task);
    tasks.push_back(newtask);
    cout<<"Task added successfully. Task ID: "<<id<<endl;

}

void markCompleted(int taskid){
    for( Todo& x: tasks ){
        if(x.id == taskid){
            x.completed = true;
            cout<<"Task of ID: "<<taskid<<" marked completed"<<endl;
            break;

        }
    }


}
void deleteTask(int taskid){
        for(auto it = tasks.begin(); it != tasks.end();){
                    if(it->id == taskid){
                        it = tasks.erase(it);
                        cout<<"Task of ID: "<<taskid<<" deleted successfully"<<endl;
                        break;
                    }else{
                        it++;

                    }
                }






};


void showTasks(){
    for(Todo x: tasks){
      cout<<x.id<<" "<<x.title<<" "<<x.completed<<endl;
    }
};


int main() {
    while (true) {
        int input;
        std::cout << "choose one option" << std::endl;
        std::cout << "1. Add task" << std::endl;
        std::cout << "2. Show tasks" << std::endl;
        std::cout << "3. Remove task " << std::endl;
        std::cout << "4. Complete Task" << std::endl;
        std::cout << "0. Exit" << std::endl;

        if(!(cin>>input)){
            cout<<"Invalid input"<<endl;
            continue;
        }
        cin.ignore();
        if(input == 1){
            string task;
            cout<<"Enter task: ";
            getline(cin,task);
            addTask(task);
            continue;
        }else if(input == 2){
            showTasks();
            continue;
        }else if(input == 3){
            showTasks();
            int id;
            cout<<"Enter taskid: ";
            cin>>id;
            deleteTask(id);
            continue;
        }else if(input == 4){
            showTasks();
            int id;
            cout<<"Enter taskid: ";
            cin>>id;
            markCompleted(id);
            continue;
        }else if(input == 0){
            return 0;

        }else{
            cout<<"Option not available"<<endl;
        }


    }

    return 0;
}
