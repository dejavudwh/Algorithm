| Number | Title | Solution | Difficulty |
|  ----  | ----  |   ----   |    ----    |
| 26  | Remove Duplicates from Sorted Array  |          |   Easy        |


### 解题思路

> 和27题类似，27题属于查找其中的一个重复序列，26题需要查找出所有重复序列。两题都要求空间复杂度是O(1)，27题是找出重复序列后算出之后元素需要移动的次数，这题也类似。

1. 设置两个指针i, j
2. j对整个数组进行扫描，扫描至非重复元素（记住这里是已经排好序的数组了
3. 把这个非重复数字复制到i处，i++

### 代码

```java
class Solution {
    public int removeDuplicates(int[] nums) {
        int i = 0;
        for (int j = 1; j < nums.length; j++) {
            if (nums[j] != nums[j - 1]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
}
```