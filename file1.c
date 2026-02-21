// file1.c
static int hiddenVar = 10;  // only visible in file1.c

void showVar() {
    printf("%d\n", hiddenVar);
}

