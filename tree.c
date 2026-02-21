#include <stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* left;
struct Node* right;
};



struct Node* createNode(int value) {
    // 1. Request memory for one Node on the heap
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    // 2. Check if the memory was actually allocated (safety first!)
    if (newNode == NULL) {
        return NULL; 
    }

    // 3. Initialize the members using the arrow (->) operator
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}


void DFS(struct Node *root){
if(root == NULL){
return;

}

DFS(root->left);
printf("%d ", root->data);
DFS(root->right);

}


int main(int argc, char* argv[]) {
struct Node* root = createNode(10);
struct Node* rootleft =  createNode(5);
struct Node* rootright =  createNode(15);
struct Node* rootlleft =  createNode(2);
struct Node* rootlright =  createNode(7);
struct Node* rootrleft =  createNode(12);
struct Node* rootrright =  createNode(20);


root->left = rootleft;
root->right = rootright;
rootleft->left = rootlleft;
rootleft->right = rootlright;
rootright->left = rootrleft;
rootright->right = rootrright;




    DFS(root);
    return 0;
}
