class Solution:
    def dfs(self, grid, i, j, m, n):
        if i < 0 or i >= m or j < 0 or j >= n or grid[i][j] == '0':
            return
        grid[i][j] = '0'
        self.dfs(grid, i + 1, j, m, n)
        self.dfs(grid, i - 1, j, m, n)
        self.dfs(grid, i, j + 1, m, n)
        self.dfs(grid, i, j - 1, m, n)

    def numIslands(self, grid: list[list[str]]) -> int:
        if not grid:
            return 0

        m, n = len(grid), len(grid[0])
        islands = 0

        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1':
                    islands += 1
                    self.dfs(grid, i, j, m, n)

        return islands