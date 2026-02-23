#include <stdio.h>
#include<math.h>

struct point{
int x;
int y;
};

struct point makepoint(int x, int y){
struct point temp = {x,y};
return temp;
}

int main(int argc, char* argv[]) {

struct point pt = {320,200};
struct point newpt = makepoint(500,360);

    printf("%d\n%d",newpt.x,newpt.y);
    return 0;
}
