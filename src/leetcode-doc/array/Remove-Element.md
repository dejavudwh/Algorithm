| Number | Title | Solution | Difficulty |
|  ----  | ----  |   ----   |    ----    |
| 27  | Remove Element  |          |   Easy        |

### 思路

1. 先排序
2. 从排序好的数组找到和目标值相等的数列
3. 直接向前移动

### 代码

```java
public class RemoveElement {
    public static int removeElement(int[] nums, int val) {
        // 排序
        Arrays.sort(nums);
        int pos = 0, count = 0;
        // 找出和val相等的序列
        for (int k = 0; k < nums.length; k++) {
            if (nums[k] == val) {
                count++;
                pos = k;
            }
        }
        // 移除
        for (int i = pos + 1; i < nums.length; i++) {
            nums[i - count] = nums[i];
        }

        return nums.length - count;
    }
}
```