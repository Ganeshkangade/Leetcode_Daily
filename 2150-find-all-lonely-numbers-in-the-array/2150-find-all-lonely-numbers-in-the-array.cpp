class Solution {
public:
    vector<int> findLonely(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int, int>mp;
        vector<int>result;

        for(int i = 0; i<n; i++)
        {
            mp[nums[i]]++;
        }

        for(int i = 0; i<n; i++)
        {
            if(mp[nums[i]] == 1 && mp.find(nums[i]+1) == mp.end() && mp.find(nums[i]-1)== mp.end())
            {
                result.push_back(nums[i]);
            }
        }
        
        return result;
    }
};