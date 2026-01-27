#include<stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int main(){
int i = 0;
char c;
while(i<MAXLINE && (c = getchar())!= EOF){
longest[i] = c;
c=getchar();
++i;
}
int j = 0;
while(j <i){
printf("%c",longest[i]);
j++;
}
return 0;
}
