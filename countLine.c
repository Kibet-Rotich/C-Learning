#include <stdio.h>

int main() {
    int c = 0, linecount=0;

while((c = getchar()) != EOF){
	if(c == '\n'){
		++linecount;
}
}
printf("%d",linecount);
    return 0;
}
