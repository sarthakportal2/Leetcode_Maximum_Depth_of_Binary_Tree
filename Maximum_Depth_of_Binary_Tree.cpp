class Solution {
public:
int maxDepth(TreeNode* root) {//resolved(31/3/2024)//
     //min. runtime(9ms.)T(C(N))=O(N) and S(C(N)==O(N))) as it requires non contiguous memory allocation recursively
        if(!root) return 0;//root initalize
        int maxLeft = maxDepth(root->left);// left subtree declare
        int maxRight = maxDepth(root->right);// declare right subtree
        return max(maxLeft, maxRight)+1;}};//printing maximum left and right subtree Depth Value
 
