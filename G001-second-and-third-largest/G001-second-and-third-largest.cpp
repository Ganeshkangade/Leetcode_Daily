class Solution {
  public:
    int getSecondLargest(vector<int> &arr) 
    {
        
        int first = INT_MIN;
        int second = INT_MIN; 
        int third = INT_MIN;
        int n = arr.size();
        
        for(int i = 0; i<n; i++)
        {
            
            if(arr[i]>first)
            {
                third = second;
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second && arr[i] != first)
            {
                third = second;
                second = arr[i];
            }
            else if(arr[i]>third && arr[i] != first && arr[i] != second)
            {
                third = arr[i];
            }
        }
        
         if(second == INT_MIN)
         {
             return -1;
         }
         else 
            return second;
        
    }
};
