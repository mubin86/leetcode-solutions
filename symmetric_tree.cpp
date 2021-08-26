class Solution {
public:
   bool Symmetric(TreeNode* l, TreeNode* r)
    {
        if(l==NULL && r==NULL)
            return true;
        if(l==NULL || r==NULL)
            return false;
        
	
        // return ((l->val==r->val) && Symmetric(l->left,r->right) && Symmetric(l->right,r->left));
       
       //**in details
//        if(l->val==r->val){
           
//        }
       bool temp1 = l->val==r->val;
       bool temp2 = Symmetric(l->left,r->right);
       bool temp3 = Symmetric(l->right,r->left);
           
           if(temp1 && temp2 && temp3){
               cout<<"true called"<<endl;
               return true;
           }else{
               cout<<"false called"<<endl;
               return false;
           }
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        if(root->left==NULL && root->right==NULL)
            return true;
        if(root->left==NULL || root->right==NULL)
            return false;
       
        
		// calling my recursive function
        return Symmetric(root->left,root->right);
    }
};