class Solution {
public:
    // 贪心问题
    // 每支箭尽可能射到更多气球
    // 区间（可能不能贪掉的地方） => 排序 简化操作罢了
    // 优化
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) {
            return 0;
        }

        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int pos = points[0][1];
        int res = 1;
        for (const vector<int>& ballon : points) {
            if (ballon[0] > pos) {
                res++;
                pos = ballon[1];
            }
        }

        return res;
    }
};