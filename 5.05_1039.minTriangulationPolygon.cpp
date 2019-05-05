// 1039. Minimum Score Triangulation of Polygon
// Author: votrubac
// recursive memoization
int dp[50][50] = {};
int minScoreTriangulation(vector<int>& A, 
						  int i = 0, int j = 0, int res = 0) {
  if (j == 0) j = A.size() - 1;
  if (dp[i][j] != 0) return dp[i][j];
  for (auto k = i + 1; k < j; ++k) {
    res = min(res == 0 ? INT_MAX : res, 
      minScoreTriangulation(A, i, k) + A[i] * A[k] * A[j] + minScoreTriangulation(A, k, j));
  }
  return dp[i][j] = res;
}

// lee215
int minScoreTriangulation(vector<int>& A) {
    int n = A.size();
    vector<vector<int>> dp(n, vector<int>(n));
    for (int j = 2; j < n; ++j) {
        for (int i = j - 2; i >= 0; --i) {
            dp[i][j] = INT_MAX;
            for (int k = i + 1; k < j; ++k)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + A[i] * A[j] * A[k]);
        }
    }
    return dp[0][n - 1];
 }

 