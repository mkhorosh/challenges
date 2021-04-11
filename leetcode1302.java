// 11.04.21 leetcode 1302. Deepest Leaves Sum

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
    public int deepestLeavesSum(TreeNode root) {
        Queue<TreeNode>q = new LinkedList();
        q.offer(root);
        int ans = 0;
        while(!q.isEmpty()){
            ans = 0;
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode current = q.poll();
                ans+=current.val;
                if(current.left!=null){
                    q.offer(current.left);
                }
                if(current.right!=null){
                    q.offer(current.right);
                }
            }
        }
        return ans;
    }
}
