#include <iostream>
#include <vector>
#include <string>


// The "High Level" way (Convenient, but heavy)
struct StudentHighLevel {
    int id;
    std::string name; // Manages heap memory dynamically
};

// The "Low Level" way (Fixed size, raw memory)
struct StudentLowLevel {
    int id;
    char name[20]; // Fixed 20 bytes block
};

int main() {
    std::cout << "--- DAY 1: ANALYSIS ---\n";

    // 1. Compare Sizes
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Size of std::string: " << sizeof(std::string) << " bytes (overhead)\n";

    std::cout << "\n--- STRUCT SIZES ---\n";
    std::cout << "StudentHighLevel size: " << sizeof(StudentHighLevel) << " bytes\n";
    std::cout << "StudentLowLevel size:  " << sizeof(StudentLowLevel) << " bytes\n";

    // 2. Visualize Contiguous Memory in Vector
    StudentLowLevel kibet = {1, "Kibet"};
    StudentLowLevel rotich = {2, "rotich"};

    std::vector<StudentLowLevel> students;
    students.push_back(kibet);
    students.push_back(rotich);

    std::cout << "\n--- MEMORY ADDRESSES ---\n";
    std::cout << "Student 1 Address: " << &students[0] << "\n";
    std::cout << "Student 2 Address: " << &students[1] << "\n";
    std::cout << "Difference: " << (char*)&students[1] - (char*)&students[0] << " bytes\n";

    return 0;
}
