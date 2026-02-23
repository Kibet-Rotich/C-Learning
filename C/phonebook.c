#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contact {
    char name[50];
    char phone[20];
    struct Contact *left;
    struct Contact *right;
} Contact;


Contact* insert(char *name, char *phone, Contact *root) {
    if (root == NULL) {
        Contact *newcontact = (Contact*)malloc(sizeof(Contact));
        if (newcontact == NULL) return NULL;
        
        strcpy(newcontact->name, name); 
        strcpy(newcontact->phone, phone);
        newcontact->left = newcontact->right = NULL;
        return newcontact;
    }

    if (strcmp(name, root->name) < 0) {
        root->left = insert(name, phone, root->left);
    } else if (strcmp(name, root->name) > 0) {
        root->right = insert(name, phone, root->right);
    }
    return root;
}

void search(char *name, Contact *root) {
    if (root == NULL) {
        printf("\nContact '%s' not found.\n", name);
        return;
    }
    int cmp = strcmp(name, root->name);
    if (cmp == 0) {
        printf("\nFound: %s -> %s\n", root->name, root->phone);
    } else if (cmp < 0) {
        search(name, root->left);
    } else {
        search(name, root->right);
    }
}

void listAlphabetically(Contact *root) {
    if (root == NULL) return;
    listAlphabetically(root->left);
    printf("%-20s | %s\n", root->name, root->phone);
    listAlphabetically(root->right);
}

void cleanup(Contact *root) {
    if (root == NULL) return;
    cleanup(root->left);
    cleanup(root->right);
    free(root);
}

int main() {
    Contact *root = NULL;
    int choice;
    char name[50], phone[20];

    // Pre-populating with a few contacts
    root = insert("Zion", "0711111111", root);
    root = insert("Alice", "0722222222", root);
    root = insert("Mumo", "0733333333", root);

    while (1) {
        printf("\n--- Phonebook ---\n");
        printf("1. Add Contact\n2. Search Contact\n3. List All\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        getchar(); // Clear the newline from buffer

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = 0; // Remove newline
                printf("Enter Phone: ");
                fgets(phone, 20, stdin);
                phone[strcspn(phone, "\n")] = 0;
                root = insert(name, phone, root);
                break;
            case 2:
                printf("Enter Name to Search: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = 0;
                search(name, root);
                break;
            case 3:
                printf("\n%-20s | %s\n", "Name", "Phone");
                printf("----------------------------------\n");
                listAlphabetically(root);
                break;
            case 4:
                cleanup(root);
                printf("Exiting...\n");
                return 0;
        }
    }
}
