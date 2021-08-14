class Solution {
public:   
    bool isSameTree(TreeNode* p, TreeNode* q) {
    //also can be used queue approach
        
        if(p == NULL && q == NULL)
            return true;
        
        if(p == NULL || q == NULL || p->val != q->val)
            return false;
        
        
//          bool rightcheck = isSameTree(p->right, q->right);
//         bool leftcheck = isSameTree(p->left, q->left);
        
//         if(rightcheck && leftcheck)
//             return true;
//         else
//             return false;
        
        //*********simplified****//////////
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};