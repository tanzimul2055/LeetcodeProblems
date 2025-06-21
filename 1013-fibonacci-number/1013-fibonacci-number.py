class Solution:
    def fib(self, n: int) -> int:
        if n<=1:
            return n
        first,second=0,1
        for i in range(2,n+1):
            second+=first
            first=second-first
        return second