#include <stdio.h>
#include<stdlib.h>
#include<time.h>



int main(int argc, char* argv[]) {
    srand(time(NULL));
    for(int i = 0; i<10;i++){
        printf("%f \n", (double)rand()/(RAND_MAX));
    }
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     srand(time(NULL));          // seed once at program start
//     int dice = (rand() % 6) + 1; // random number 1–6
//     printf("You rolled: %d\n", dice);
//     return 0;
// }
