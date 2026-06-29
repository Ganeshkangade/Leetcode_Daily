# Second Largest Element in an Array

## Problem Statement

Given an array of integers, find the **second largest distinct element**. If the second largest element does not exist, return `-1`.

### Examples

#### Example 1

```text
Input:  [12, 35, 1, 10, 34, 1]
Output: 34
```

#### Example 2

```text
Input:  [10, 10, 10]
Output: -1
```

---

## Approach

The solution traverses the array only once while maintaining three variables:

- `first` → Largest element
- `second` → Second largest distinct element
- `third` → Third largest distinct element (optional, maintained for practice)

### Algorithm

1. Initialize `first`, `second`, and `third` with `INT_MIN`.
2. Traverse the array.
3. If the current element is greater than `first`:
   - Shift:
     - `third = second`
     - `second = first`
     - `first = current`
4. Else if the current element is greater than `second` and is not equal to `first`:
   - Shift:
     - `third = second`
     - `second = current`
5. Else if the current element is greater than `third` and is distinct from `first` and `second`:
   - Update `third`.
6. If `second` remains `INT_MIN`, return `-1`; otherwise, return `second`.

---

## C++ Solution

```cpp
class Solution {
public:
    int getSecondLargest(vector<int> &arr)
    {
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;

        int n = arr.size();

        for(int i = 0; i < n; i++)
        {
            if(arr[i] > first)
            {
                third = second;
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second && arr[i] != first)
            {
                third = second;
                second = arr[i];
            }
            else if(arr[i] > third && arr[i] != first && arr[i] != second)
            {
                third = arr[i];
            }
        }

        if(second == INT_MIN)
            return -1;

        return second;
    }
};
```

---

## Complexity Analysis

| Complexity | Value |
|------------|-------|
| Time | **O(n)** |
| Space | **O(1)** |

---

## Key Concepts

- Array Traversal
- Single Pass Algorithm
- Variable Shifting
- Distinct Elements
- Time Complexity Optimization

---

## Interview Notes

- A single traversal is sufficient to find the largest and second largest elements.
- Always handle duplicate values carefully.
- If all elements are the same, the second largest element does not exist.
- This approach avoids sorting and achieves **O(n)** time complexity with **O(1)** extra space.

---

## Related Problems

- Largest Element in an Array
- Third Maximum Number (LeetCode 414)
- Maximum Product of Two Elements in an Array
- Maximum Product of Three Numbers
