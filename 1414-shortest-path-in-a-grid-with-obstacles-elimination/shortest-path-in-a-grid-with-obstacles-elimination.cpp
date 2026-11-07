
class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();

        queue<vector<int>> q;
        vector<vector<int>> vis(m, vector<int>(n, -1));

        q.push({0, 0, k});
        vis[0][0] = k;

        int steps = 0;
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};

        while (!q.empty()) {
            int sz = q.size();

            while (sz--) {
                auto cur = q.front();
                q.pop();

                int x = cur[0], y = cur[1], rem = cur[2];

                if (x == m-1 && y == n-1)
                    return steps;

                for (int d = 0; d < 4; d++) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];

                    if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                        int r = rem - grid[nx][ny];

                        if (r >= 0 && r > vis[nx][ny]) {
                            vis[nx][ny] = r;
                            q.push({nx, ny, r});
                        }
                    }
                }
            }
            steps++;
        }

        return -1;
    }
};
