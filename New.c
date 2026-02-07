#include<stdio.h>
#include<unistd.h>

int age = 23;
void changeage(int num, int pid);

int main(){
int i = 0;
for(; i<age;i++){
printf("%d \n", i+1);
}
changeage(57, getpid());

int pid = fork();
if(pid == 0){
changeage(89, pid);
for(; i<age;i++){
printf("Child process %d \n", i+1);
}
}else{
changeage(100, pid);
for(; i<age;i++){
printf("Parent process %d \n", i+1);
}
}



return 0;
}

void changeage(int num, int pid){
if(pid == 0){
printf("Change age called by child\n");
extern age = num;
}else{
printf("Change age called by parent\n");
extern age = num;
}

}


