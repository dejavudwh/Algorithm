class Solution {
public:
    // 双指针
    // 必收敛于l、r之间
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1, sum = 0;
        while (l < r) {
            sum = numbers[l] + numbers[r];
            if (sum == target) {
                break;
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }

        return vector<int> {l + 1, r + 1};
    }
};