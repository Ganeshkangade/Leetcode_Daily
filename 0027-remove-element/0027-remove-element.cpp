class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n = nums.size();
        int k = 0;
        vector<int>result;

        for(int i = 0; i<n; i++)
        {
            if(nums[i]!=val)
            {
                nums[k] = nums[i];
                result.push_back(nums[k]);
                k++;
            }
        }

       return k;
        
    }
};