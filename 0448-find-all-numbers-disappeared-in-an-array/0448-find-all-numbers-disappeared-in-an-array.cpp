class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int>result;

        unordered_set<int>mp;

        for(int i = 0; i<n; i++)
        {
            mp.insert(nums[i]);
        }

        for(int i = 1; i<=n; i++)
        {
            if(mp.find(i) == mp.end())
            {
                result.push_back(i);
            }
        }
        return result;
    }
};