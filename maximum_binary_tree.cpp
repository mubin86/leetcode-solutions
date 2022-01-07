class Solution
{
public:
    TreeNode *solve(vector<int> &arr, int s, int e)
    {
        if (s > e)
        {
            return NULL;
        }
        
        int maxIndex = -1, maxi = INT_MIN;
        
        for (int i = s; i <= e; i++)
        {
            if (maxi < arr[i])
            {
                maxi = arr[i];
                maxIndex = i;
            }
        }
        
        TreeNode *root = new TreeNode(maxi);
        root->left = solve(arr, s, maxIndex - 1);
        root->right = solve(arr, maxIndex + 1, e);
        return root;
    }
    
    
    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        return solve(nums, 0, nums.size() - 1);
    }
};