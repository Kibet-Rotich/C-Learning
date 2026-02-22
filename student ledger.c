#include <stdio.h>
#include <string.h>

typedef struct Student {
    char name[50];
    int id;
    float gpa;
} Student;

void saveStudent(Student s) {
    FILE *fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Failed to open file for writing.\n");
        return;
    }
    fprintf(fp, "ID: %d | Name: %-15s | GPA: %.2f\n", s.id, s.name, s.gpa);
    fclose(fp);
}

void printLedger() {
    FILE *fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Current Student Ledger ---\n");
    char c;
    while ((c = getc(fp)) != EOF) {
        putchar(c); 
    }
    fclose(fp);
}

int main() {
    int num;
    printf("How many students do you want to enter? ");
    if (scanf("%d", &num) != 1) return 1;
    getchar();

    for (int i = 0; i < num; i++) {
        Student s;
        printf("\nStudent %d Name: ", i + 1);
        fgets(s.name, 50, stdin);
        s.name[strcspn(s.name, "\n")] = '\0';  // Remove trailing newline
        printf("Student ID: ");
        scanf("%d", &s.id);
        getchar();
        printf("Student GPA: ");
        scanf("%f", &s.gpa);
        getchar();

        saveStudent(s);
    }

    printLedger();
    return 0;
}