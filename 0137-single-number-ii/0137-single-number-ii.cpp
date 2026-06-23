class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int result;

        unordered_map<int, int>mp;

        for(int i = 0; i<n; i++)
        {
            mp[nums[i]]++;
        }   
        

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second==1)
            {
                result = it->first;
            }
        }

        return result;
    }
};