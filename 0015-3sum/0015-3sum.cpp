class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int sum = 0;

        int target = 0;
        set<vector<int>>s;
        vector<vector<int>>output;   


        for(int i = 0; i<n; i++)
        {
            int j = i+1;
            int k = n-1;

            while(j<k)
            {
                sum = nums[i]+nums[j]+nums[k];
                
                if(sum == target)
                {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(sum<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        
        for(auto read : s)
        {
            output.push_back(read);
        }

        return output;
    }
};