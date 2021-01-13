| Number | Title | Solution | Difficulty |
|  ----  | ----  |   ----   |    ----    |
|  80 | Remove Duplicates from Sorted Array II  |          |   Medium        |


### 题目思路

> 和26题类似，都是双指针，只需要多判断一次重复的个数即可

1. 设置两个指针i, j
2. j对整个数组进行扫描
    1. 扫描至非重复元素
        直接放入i中，i++
    2. 扫描至重复元素
        判断重复元素个数，如果小于两个就放入i中

### 代码

```java
public int removeDuplicates(int[] nums) {
        int i = 0, count = 0;
        for (int j = 1; j < nums.length; j++) {
            if (nums[j] == nums[j - 1]) {
                // 如果元素相等，但是只重复一次
                count++;
                if (count <= 1) {
                    i++;
                    nums[i] = nums[j];
                }
            } else if (nums[j] != nums[j - 1]) {
                // 如果元素不相等
                count = 0;
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
```