#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) return NULL;
    
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// In-order DFS (Left, Root, Right)
void printDFS(Node* root) {
    if (root == NULL) return;
    printDFS(root->left);
    printf("%d ", root->data);
    printDFS(root->right);
}

// Post-order Deletion (Left, Right, Root)
void freeTree(Node* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    printf("\nFreeing node with data: %d", root->data); //see it in action
    free(root);
}

int main() {
    Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(2);
    root->left->right = createNode(7);

    printf("Tree Values: ");
    printDFS(root);
    
    printf("\nCleaning up memory...");
    freeTree(root);
    
    return 0;
}
