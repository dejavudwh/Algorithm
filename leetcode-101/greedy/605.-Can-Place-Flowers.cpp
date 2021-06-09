class Solution {
public:
    // 贪心问题
    // 保证？策略 => 每步都是最优解
    // ？策略还应该处理部分稍有不同的情况
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        int prev = -1;
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 1) {
                if (prev == -1) {
                    // 左边所有花坛都没有种花
                    count += i / 2;
                } else {
                    count += (i - prev - 2) / 2;
                }
                prev = i;
            }
        }

        if (prev == -1) {
            // 所有花坛都没有种花
            count += (size + 1) / 2;
        } else {
            // 最右边剩余的空花坛
            count += (size - prev - 1) / 2;
        }

        return count >= n;
    }
};