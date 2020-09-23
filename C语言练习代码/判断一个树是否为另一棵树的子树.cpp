#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
typedef struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;
bool Same(struct TreeNode* p, struct TreeNode* q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL || q == NULL)
    {
        return false;
    }
    return (p->val == q->val && Same(p->left, q->left) && Same(p->right, q->right));
}
bool isSubtree(struct TreeNode* s, struct TreeNode* t)  //3 4 1 0 0 2 0 0 5 0 0   4 1 0 0 2 0 0
{
    if (t == NULL)
    {
        return true;
    }
    if (s == NULL)
    {
        return false;
    }
    if (Same(s, t))
    {
        return true;
    }

    return (isSubtree(s->left, t) || isSubtree(s->right, t));
}