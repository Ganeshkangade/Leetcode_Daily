import java.util.*;

class Solution {
    public List<List<Integer>> threeSum(int[] nums) {

        Arrays.sort(nums);

        int target = 0;
        int n = nums.length;

        Set<List<Integer>> seen = new HashSet<>();
        List<List<Integer>> result = new ArrayList<>();

        for (int i = 0; i < n; i++) {

            int j = i + 1;
            int k = n - 1;

            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                if (sum == target) {

                    seen.add(Arrays.asList(nums[i], nums[j], nums[k]));
                    j++;
                    k--;

                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        result.addAll(seen);

        return result;
    }
}