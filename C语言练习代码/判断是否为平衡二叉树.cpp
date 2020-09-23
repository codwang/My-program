//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
// typedef struct TreeNode {
//     int val;
//     struct TreeNode *left;
//     struct TreeNode *right;
// }TreeNode;
// 
// //给定一个二叉树，判断它是否是高度平衡的二叉树。
// //    本题中，一棵高度平衡二叉树定义为：
// //    一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过1。
// //示例 1:
// //给定二叉树[3, 9, 20, null, null, 15, 7]
// //3 9 0 0 20 15 0 0 7 0 0
// //    3
// //    / \
// //    9  20
// //    / \
// //    15   7
// //    返回 true 。
//
// //    示例 2:
// //给定二叉树[1, 2, 2, 3, 3, null, null, 4, 4]
// //    1
// //    / \ 
// //    2   2
// //    / \       1 2 2 3 3 0 0 4 4
// //    3   3
// //    / \
// //    4   4  1 2 3 4 4 3 0 0 2 0 0
// //    返回 false 。
//void BinaryInit(TreeNode** root)
//{
//     *root = NULL;
//}
//
//TreeNode* TreeNodeCreate()
//{
//    int item;
//    scanf("%d", &item);
//    if (item == 0)
//    {
//        return NULL;
//    }
//    else {
//        TreeNode* t = (TreeNode*)malloc(sizeof(TreeNode));
//        t->val=item;
//        t->left = TreeNodeCreate();
//        t->right = TreeNodeCreate();
//        return t;
//    }
//}
//void LVR(TreeNode* t)
//{
//    if (t != NULL)
//    {
//        printf("%d ",t->val);
//        LVR(t->left);
//        LVR(t->right);
//    }
//}
//int LeftHeight(TreeNode* t)
//{
//  
//    if (t == NULL)
//    {
//        return 0;
//    }
//    else {
//        
//        int left_h = LeftHeight(t->left);
//        
//        return left_h+1;
//    }
//}
//int RightHeight(TreeNode* t)
//{
//    if (t == NULL)
//    {
//        return 0;
//    }
//    else {
//        int right_h = RightHeight(t->right);
//       
//        return right_h + 1;
//    }
//}
//int Height(TreeNode* t)
//{
//    if (t == NULL)
//    {
//        return 0;
//    }
//    else {
//        int left_h = Height(t->left);
//        int right_h = Height(t->right);
//        return (left_h > right_h ? left_h : right_h) + 1;
//    }
//}
//bool isBalanced(struct TreeNode* root) {
//
//    int lefthigh = LeftHeight(root);
//    int righthigh = RightHeight(root);
//    if (lefthigh == 1)
//    {
//        righthigh = Height(root);
//    }
//    if (righthigh == 1)
//    {
//        lefthigh= Height(root);
//    }
//    int ret = lefthigh - righthigh;
//    if (ret > 1||ret<-1)
//    {
//        return false;
//    }
//    return true;
//}
//bool Same(struct TreeNode* p, struct TreeNode* q)
//{
//    if (p == NULL && q == NULL)
//    {
//        return true;
//    }
//    if (p == NULL || q == NULL)
//    {
//        return false;
//    }
//    return (p->val == q->val && Same(p->left, q->left) && Same(p->right, q->right));
//}
//bool isSubtree(struct TreeNode* s, struct TreeNode* t)  //3 4 1 0 0 2 0 0 5 0 0   4 1 0 0 2 0 0
//{
//    if (Same(s, t))
//    {
//        return true;
//    }
//    if (s == NULL || t == NULL)
//    {
//        return false;
//    }
//    return (s->val == t->val && isSubtree(s->left, t->left) || isSubtree(s->right,t->right));
//}
//int main()
//{
//    //1 2 3 4 0 0 4 0 0 3 0 0 2 0 0  1 0 3 2 0 0 0  A#CB###   1 0 3 0 2 0 0
//    TreeNode* bt;
//    BinaryInit(&bt);
//    bt = TreeNodeCreate();
//    TreeNode* bt_1= TreeNodeCreate();
//    LVR(bt);
//    printf("\n");
//    LVR(bt_1);
//    printf("\n");
//   /* printf("%d\n", LeftHeight(bt));
//    printf("%d\n", RightHeight(bt));*/
//    printf("%d\n", Height(bt));
//    bool flag = isSubtree(bt,bt_1);
//    if (flag)
//    {
//        printf("true\n");
//    }
//    else {
//        printf("false\n");
//    }
//
//}