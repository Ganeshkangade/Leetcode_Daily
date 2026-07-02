class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_set<int>mp;
        int unique = 0;

        for(int i = 0; i<n; i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp.insert(nums[i]);
                nums[unique++] = nums[i];
            }

        }

        return unique;

       
        
    }
};