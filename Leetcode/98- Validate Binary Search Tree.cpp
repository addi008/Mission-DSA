/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isValidBST(TreeNode root) {
        return validate(root, Long.MIN_VALUE, Long.MAX_VALUE);
    }

    private boolean validate(TreeNode node, long low, long high) {   // this will return tue if if null node or no node is present as a child node 
        if (node == null) return true;

        if (node.val <= low || node.val >= high) return false;    //the value of left child node should be smaller then parent node && value of right child node should be more then parent node 

        return validate(node.left, low, node.val) &&     // this will check the condition of chld node with the respective parentnode   node.left = 1 & low = -infinite  & node.val = 5 
             validate(node.right, node.val, high);     // this will check the right child node node.right = 4 & node.val = 5 & high = infinite  
    }
}
