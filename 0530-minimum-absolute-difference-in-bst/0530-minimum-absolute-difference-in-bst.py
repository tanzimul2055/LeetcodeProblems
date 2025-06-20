class Solution:
    def inorder(self, root, ans):
        if root is None:
            return
        self.inorder(root.left, ans)
        ans.append(root.val)
        self.inorder(root.right, ans)

    def getMinimumDifference(self, root):
        ans = []
        self.inorder(root, ans)
        diff = sys.maxsize
        for i in range(len(ans) - 1):
            if ans[i + 1] - ans[i] < diff:
                diff = ans[i + 1] - ans[i]
        return diff