#include<stdio.h>
#include<string.h>

enum boolean { NO = 0, YES = 1 };

int main(){
    
    // Method 1: Direct integer value (enums are integers in C)
    printf("Method 1 - Direct value: %d\n", YES);
    
    // Method 2: Using enum type with dot notation (when creating variables)
    enum boolean myBool = YES;
    printf("Method 2 - Variable: %d\n", myBool);
    
    // Method 3: Multiple enum values
    printf("Method 3 - Multiple: NO=%d, YES=%d\n", NO, YES);
    
    // Method 4: With custom values
    printf("Method 4 - Custom values: NO=%d, YES=%d\n", NO, YES);
    
    // Method 5: String representation (manual approach)
    const char *bool_strings[] = {"NO", "YES"};
    printf("Method 5 - String: %s\n", bool_strings[YES]);
    
    return 0;
}
