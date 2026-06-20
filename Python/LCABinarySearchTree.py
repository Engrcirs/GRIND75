# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        # Start our pointer at the top of the tree
        current = root

        while current:
            # 1. Are BOTH target nodes larger than our current position?
            # If so, the ancestor must be somewhere down the right branch.
            if p.val > current.val and q.val > current.val:
               current = current.right
            # 2. Are BOTH target nodes smaller than our current position?
            # If so, the ancestor must be somewhere down the left branch.
            elif p.val < current.val and q.val < current.val:
               current = current.left
             # 3. We have found the split point! 
            # (Or one of the targets is the exact node we are standing on).
            # This makes the current node the Lowest Common Ancestor.
            else:
                return current
        return None