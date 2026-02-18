#include <stdio.h>

// Stringizing: turn argument into a quoted string
#define STR(x) #x

// Token-pasting: join tokens together
#define VARLOG(var) log_##var(var)

// Define a logging function for a specific variable
#define DEFINE_LOG(var, type) \
    void log_##var(type v) { \
        printf("%s = %d\n", STR(var), v); \
    }

int main() {
    // Generate a logging function for 'count'
    DEFINE_LOG(count, int);

    int count = 42;

    // Call the generated logging function
    VARLOG(count);

    return 0;
}

