class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int first = INT_MIN;
        int second = INT_MIN;
        int index = -1;

        int n= nums.size();

        for(int i = 0; i<n; i++)
        {
            if(nums[i]>first)
            {
                second = first;
                first = nums[i];
                index = i;
            }
            else if(nums[i]>second)
            {
                second = nums[i];
            }
        }
        
        if(first>=(second*2))
        {
            return index;
        }
        else 
            return -1;
    }
};