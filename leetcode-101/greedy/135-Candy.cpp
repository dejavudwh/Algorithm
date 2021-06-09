class Solution {
public:
    int candy(vector<int>& ratings) {
        // 贪心问题 
        // [x] 选择 或 排序
        // 双向遍历也可以获得最优解
        int size = ratings.size();
        if (size < 2) {
            return size;
        }

        vector<int> num(size, 1);
        for (int i = 1; i < size; i++) {
            if (ratings[i] > ratings[i - 1]) {
                num[i] = num[i - 1] + 1;
            }
        }
        
        for (int i = size - 1; i > 0; i--) {
            if (ratings[i - 1] > ratings[i]) {
                num[i - 1] = max(num[i - 1], num[i] + 1);
            }
        }

        return accumulate(num.begin(), num.end(), 0);
    }
};