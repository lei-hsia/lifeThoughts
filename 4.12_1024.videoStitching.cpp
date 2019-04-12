// Author: cuiaoxiang


const int INF = 1 << 30;

class Solution {
public:
    int videoStitching(vector<vector<int>>& a, int T) {
        sort(a.begin(), a.end(), 
            [](const vector<int>& u, const vector<int>& v){
                return u[1] < v[1];
            });
        int n = a.size();
        vector<int> dp(n);
        int res = INF;
        for (int i=0; i<n; ++i) {
            dp[i] = (a[i][0]==0 ? 1 : INF);
            for (int j=0; j<i; ++j) {
                if (a[j][1] >= a[i][0]) {
                    dp[i] = min(dp[j]+1, dp[i]);
                }
            }
        }
        for (int i=0; i<n; ++i) {
            if (a[i][1] >= T) {
                res = min(res, dp[i]);
            }
        }
        if (res == INF) return -1;
        return res;
    }
};