#include<stdio.h>
#include<unistd.h>
#define SLEEPTIME 1
int main(){
int i = 0;

for(;i<5;++i){
printf("%d\n",i);
sleep(SLEEPTIME);
}

printf("Calling fork\n");
int pid = fork();


if(pid != 0){
printf("Parent process");
i = 7;
}else{
printf("child process");
i = 6;
}

for(;i<10;++i){
printf("%d\n",i);
sleep(SLEEPTIME);
}

return 0;
}

