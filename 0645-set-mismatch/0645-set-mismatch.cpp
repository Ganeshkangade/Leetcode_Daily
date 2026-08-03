class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n = nums.size();

        unordered_map<int, int>mp;

        int excepted_sum = n*(n+1)/2;
        int sum = 0;
        int result;
        int duplicate = -1;

        for(int i = 0; i<n; i++)
        {
            sum+=nums[i];
        }

        for(int i = 0; i<n; i++)
        {
            mp[nums[i]]++;

            if(mp[nums[i]]>1)
            {
                duplicate = nums[i];
            }
        }


        result = excepted_sum-sum+duplicate;

        return {duplicate, result};

        
    }
};