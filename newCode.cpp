#include<stdlib.h>
#include <stdio.h>

struct BinaryTree{
    int data;
    struct BinaryTree*right;
    struct BinaryTree*left;
};

struct BinaryTree*createnode(int val){
    struct BinaryTree*root=(struct BinaryTree*)malloc(sizeof(struct BinaryTree));
    root->data=val;
    root->left=NULL;
    root->right=NULL;
    
}

void inorder(struct BinaryTree*root){
    if(root==NULL){
    return;
    }
    else {inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);
}

}
 
void preorder(struct BinaryTree*root){
    if(root==NULL){
        return;
    }
    else {
        printf("%d->",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct BinaryTree*root){
    if(root==NULL){
        return;
    }
    else{
        postorder(root->left);
        postorder(root->right);
        printf("%d->",root->data);
    }
}
int main()
{
    printf("Lets grow the tree\n");
    struct BinaryTree*root=createnode(1);
    root->left=createnode(2);
    root->right=createnode(3);
    root->left->left=createnode(4);
    root->left->right=createnode(5);
    
    printf("tree has grown up\n");
    
    printf("Inorder traversal ");
    inorder(root);printf("NULL");

    printf("\npreorder traversal ");
    preorder(root);printf("NULL");
    
    printf("\nPostorder  traversal");
    postorder(root);printf("NULL");
    
    return 0 ;
}