class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        int depth = 0;
        while (label > 0) {
            label = label / 2;
            depth++;
        }
        vector<int> res(depth);
        res[0] = label;
        int i = 1;
        while (label != 1) {
            if (depth % 2) {
                res[i] = 3*pow(2, depth-2) - label/2 ; 
            } else {
                res[i] = 3*pow(2, depth-2) - label/2 -1;
            }
            label = label / 2;
            ++i;
        }
        res.push_back(1);
        reverse(res.begin(), res.end());
        return res;
    }
};