#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
typedef struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;
void BinaryInit(TreeNode** root)
{
    *root = NULL;
}

TreeNode* TreeNodeCreate()
{
    int item;
    scanf("%d", &item);
    if (item == 0)
    {
        return NULL;
    }
    else {
        TreeNode* t = (TreeNode*)malloc(sizeof(TreeNode));
        t->val = item;
        t->left = TreeNodeCreate();
        t->right = TreeNodeCreate();
        return t;
    }
}
void VLR(struct TreeNode* root) //¸ù ×ó ÓÒ
{
    if (root == NULL)
    {
        printf("%d ", 0);
    }
    else {
        printf("%d ", root->val);
        VLR(root->left);
        VLR(root->right);
    }
}
void VRL(struct TreeNode* root) //¸ù ÓÒ ×ó
{
    if (root == NULL)
    {
        printf("%d ", 0);
    }
    else {
        printf("%d ", root->val);
        VRL(root->right);
        VRL(root->left);
    }
}

//bool issymmetric(struct treenode* root) {
//    if (root == null)
//    {
//        return false;
//    }
//    return isSymmetric(root->left)
//}
//int main()  //1 2 0 3 0 0 2 0 3 0 0
//{
//    TreeNode* bt;
//    BinaryInit(&bt);
//    bt = TreeNodeCreate();
//    VLR(bt);
//    printf("\n");
//    VRL(bt);
//    printf("\n");
//
//    printf("\n");
//    system("pause");
//    return 0;
//}