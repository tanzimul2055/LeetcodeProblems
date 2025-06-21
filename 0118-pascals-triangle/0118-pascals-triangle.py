class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        v = []
        for i in range(numRows):
            v1 = [1] * (i + 1)
            for j in range(1, i):
                v1[j] = v[i - 1][j - 1] + v[i - 1][j]
            v.append(v1)
        return v
