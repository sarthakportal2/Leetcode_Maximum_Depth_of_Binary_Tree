public class Solution {
    public int MaxDepth(TreeNode root) {
        //Optimal Soln (T(C(N))=O(N) and S(C(N)==O(N))) as it requires non contiguous(dynamic) memory allocation recursively
        if(root==null)return 0;//initalizing root
        int leftree=MaxDepth(root.left);int rightree=MaxDepth(root.right);// left and right subtree declare
        return Math.Max(leftree,rightree)+1;}}//printing maximum left and right subtree Depth Val
