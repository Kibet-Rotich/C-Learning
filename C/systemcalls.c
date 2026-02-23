#include <unistd.h>
#define BUF_SIZE 1024

int main(int argc, char* argv[]) {
    char buf[BUF_SIZE];
    ssize_t num;
    while((num = read(0,buf,BUF_SIZE))>0){
        write(1,buf,num);
    }
    return 0;
}
