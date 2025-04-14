#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

Node* createNode(int data) {
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Node* buildTree() {
    int val;
    printf("Enter data (-1 for NULL): ");
    scanf("%d", &val);
    if (val == -1) return NULL;

    Node* root = createNode(val);
    printf("Enter left child of %d:\n", val);
    root->left = buildTree();
    printf("Enter right child of %d:\n", val);
    root->right = buildTree();
    return root;
}

int height(Node* node) {
    if (!node) return -1;
    int lh = height(node->left), rh = height(node->right);
    return (lh > rh ? lh : rh) + 1;
}

Node* findNode(Node* root, int val) {
    if (!root) return NULL;
    if (root->data == val) return root;
    Node* left = findNode(root->left, val);
    return left ? left : findNode(root->right, val);
}

int main() {
    printf("Build your binary tree:\n");
    Node* root = buildTree();

    int target;
    printf("Enter the value of the node to find its height: ");
    scanf("%d", &target);

    Node* node = findNode(root, target);
    if (node)
        printf("Height of node %d is %d\n", target, height(node));
    else
        printf("Node %d not found in the tree.\n", target);

    return 0;
}

OUTPUT

Build your binary tree:
Enter data (-1 for NULL): 1
Enter left child of 1:
Enter data (-1 for NULL): 2
Enter left child of 2:
Enter data (-1 for NULL): 4
Enter left child of 4:
Enter data (-1 for NULL): -1
Enter right child of 4:
Enter data (-1 for NULL): -1
Enter right child of 2:
Enter data (-1 for NULL): 5
Enter left child of 5:
Enter data (-1 for NULL): -1
Enter right child of 5:
Enter data (-1 for NULL): -1
Enter right child of 1:
Enter data (-1 for NULL): 3
Enter left child of 3:
Enter data (-1 for NULL): -1
Enter right child of 3:
Enter data (-1 for NULL): 6
Enter left child of 6:
Enter data (-1 for NULL): -1
Enter right child of 6:
Enter data (-1 for NULL): -1

Enter the value of the node to find its height: 2
Height of node 2 is 1

