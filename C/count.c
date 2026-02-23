#include <stdio.h>

int main() {
    int count=0;
	while(getchar()!=EOF)
		++count;
	printf("%d",count);
    return 0;
}
