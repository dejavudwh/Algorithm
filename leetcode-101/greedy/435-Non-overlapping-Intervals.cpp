class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // 贪心策略：保留结尾小且不相交的区间
        if (intervals.empty()) {
            return 0;
        }

        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
            return a[1] < b[1];
        });
        int total = 0, prev = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (prev > intervals[i][0]) {
                total++;
            } else {
                prev = intervals[i][1];
            }
        }

        return total;
    }
};