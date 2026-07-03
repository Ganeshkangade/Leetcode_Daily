class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) 
    {
        unordered_map<int, int>mp;
        int n= nums.size();

        for(int i= 0; i<n; i++)
        {
            mp[nums[i]]++;

            if(mp[nums[i]] > 2)
            {
                return false;
            }
        }
        

        return true;
    }
};