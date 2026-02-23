#include<stdio.h>

#define putchar(c) putc((c),stdout);
void printfile(FILE *fp){
    char c;
    while((c = getc(fp))!=EOF){
        putchar(c);
    }
}
int  main(int argc, char** argv){
    FILE *fp = fopen("test.txt", "r");
    FILE *newfp = fopen("newtest.txt", "a+");
    char c;

    while((c =getc(fp))!=EOF){
        putc(c,newfp);
    }

    rewind(newfp);

    printfile(newfp);
    fclose(fp);
    fclose(newfp);
return 0;
}