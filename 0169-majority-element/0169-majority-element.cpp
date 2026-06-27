class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                } 
            }

            if(count>=n/2)
            {
                return nums[i];
            }else
            {
                count = 0;
            }
        }
        return count;
    }
};