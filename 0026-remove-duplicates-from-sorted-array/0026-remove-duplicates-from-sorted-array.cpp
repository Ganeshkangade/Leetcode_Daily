class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int unique = 0;
        unordered_set<int>seen;

        for(int i = 0; i<nums.size(); i++)
        {
            if(seen.find(nums[i])==seen.end())
            {
                seen.insert(nums[i]);
                nums[unique++] = nums[i];
            }
        }

        return unique;

    }        
};
