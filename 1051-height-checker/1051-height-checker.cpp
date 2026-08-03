class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int>check;
        int n = heights.size();

        for(int i = 0; i<n; i++)
        {
            check.push_back(heights[i]);
        }

        sort(check.begin(), check.end());

        int count = 0;
        for(int i = 0; i<n; i++)
        {
            if(heights[i]!=check[i])
            {
                count++;
            }
        }


        return count;
        
    }
};