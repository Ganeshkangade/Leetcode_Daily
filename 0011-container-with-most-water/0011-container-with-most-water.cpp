class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n = height.size();
        int i = 0;
        int j = n-1;

        int w, minheight = 0;
        int area = 0;

        while(i<j)
        {
            minheight = min(height[i], height[j]);
            w = j-i; 

            area = max(area, w*minheight);

            if(height[i]<height[j])
            {
                i++;
            }
            else 
            {
                j--;
            }
        }
        

        return area;
    }
};