#include <stdio.h>

#define READ 1
#define WRITE 2
#define EXECUTE 4

typedef struct File
{
    char name[30];
    unsigned char permissions: 3;
} File ;

void setPermission(File *f, unsigned char flag){
    f->permissions |= flag;
}

void removePermission(File *f, unsigned char flag){
    f->permissions &= ~(flag);

}

int hasPermission(File *f,unsigned char flag){
    return (f->permissions & flag) == flag;
}


int main() {
    File myFile = {"setup.sh", 0}; // Start with no permissions

    printf("File: %s\n", myFile.name);

    // 1. Set Read and Write
    setPermission(&myFile, READ | WRITE);
    
    // 2. Test permissions
    printf("Has Read? %s\n", hasPermission(&myFile, READ) ? "YES" : "NO");
    printf("Has Execute? %s\n", hasPermission(&myFile, EXECUTE) ? "YES" : "NO");

    // 3. Add Execute
    printf("\nAdding Execute permission...\n");
    setPermission(&myFile, EXECUTE);
    printf("Has Execute now? %s\n", hasPermission(&myFile, EXECUTE) ? "YES" : "NO");

    // 4. Remove Write
    removePermission(&myFile, WRITE);
    printf("Has Write after removal? %s\n", hasPermission(&myFile, WRITE) ? "YES" : "NO");

    return 0;
}