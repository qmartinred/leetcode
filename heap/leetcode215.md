# [215. 数组中的第K个最大元素](https://leetcode-cn.com/problems/kth-largest-element-in-an-array/)

## 堆

```cpp
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto i : nums)
        {
            pq.push(i);
            if (pq.size() > k) pq.pop();
        }
        return pq.top();
    }
};
```

### 复杂度分析：

- 时间复杂度：O(N log k)
- 空间复杂度：O(k)



## 排序

```cpp
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - k];
    }
};
```

### 复杂度分析

- 时间复杂度：O(N log N)
- 空间复杂度：O(1)



