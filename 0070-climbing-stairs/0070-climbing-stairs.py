class Solution:
    def climbStairs(self, n: int) -> int:
        if n<=3:
            return n
        first,second=2,3
        for i in range(3,n):
            second+=first
            first=second-first
        return second